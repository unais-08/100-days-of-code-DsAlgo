/***
 Part 1: Core C++ Concepts - Interview Q&A
***/

/**
✅ 1. const int *ptr, int * const ptr, const int * const ptr

- const int *ptr: Pointer to constant integer. Data cannot be changed through the pointer.
  Example:
    const int *ptr = &val;
    *ptr = 10; // ❌ Not allowed
    ptr = &anotherVal; // ✅ Allowed

- int * const ptr: Constant pointer to an integer. Address can't be changed, but data can.
  Example:
    int * const ptr = &val;
    *ptr = 10; // ✅ Allowed
    ptr = &anotherVal; // ❌ Not allowed

- const int * const ptr: Constant pointer to constant integer. Neither data nor address can change.
*/

/**
✅ 2. Pass-by-Value vs Pass-by-Reference

- Pass-by-value: Creates a copy. Original data is not modified.
- Pass-by-reference (or pointer): Direct reference to original variable. Changes affect original.
*/

/**
✅ 3. Dereferencing Null Pointer

- Causes segmentation fault or crash (undefined behavior).
*/

/**
✅ 4. Dynamic Memory Allocation in C++

int *ptr = new int;     // Allocate one int
int *arr = new int[10]; // Allocate array

// Deallocate memory
delete ptr;     // single value
delete[] arr;   // array
*/

/**
✅ 5. Reference vs Pointer

- Reference: Alias for a variable. Must be initialized. Cannot be reassigned.
- Pointer: Stores address. Can be reassigned. Can be null.
*/

/**
✅ 6. Function Overloading

void print(int);
void print(double);
void print(string);

- Same name, different parameters. Resolved at compile time.
*/

/**
✅ 7. const Keyword Examples

1. const int x = 10;           // x is read-only
2. void print(const string&);  // Won't modify input
3. class MyClass { void get() const; }; // get() doesn't modify the class
*/

#include <iostream>
using namespace std;

// Question 1: Sum of elements in dynamic array
void calculateSum()
{
    int* array = new int[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }
    cout << "\nSum: " << sum << endl;
    delete[] array;  // Free memory
}

// Question 2: Swap using pass-by-reference
void swapValues(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Question 3: Reverse string using pointers
void printReversedString(const char* str)
{
    const char* end = str;
    while (*end != '\0') end++;  // Move to null terminator
    end--;                       // Move one step back to last char

    cout << "Reversed: ";
    while (end >= str)
    {
        cout << *end;
        end--;
    }
    cout << endl;
}

int main()
{
    // Q1: Sum of dynamic array
    // calculateSum();

    // Q2: Swap by reference
    int x = 10, y = 20;
    // swapValues(&x, &y);
    // cout << "Swapped: x=" << x << ", y=" << y << endl;

    // Q3: Reverse string
    printReversedString("HelloWorld");

    return 0;
}
