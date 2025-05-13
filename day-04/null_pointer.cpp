#include <iostream>
using namespace std;

// -----------------------------
// Exercise 1: Basic Pointer Usage
// -----------------------------
void exercise_1()
{
    int number = 100;
    int *ptr_number = &number;

    cout << "\n[Exercise 1] Pointer Basics:\n";
    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Address through pointer: " << ptr_number << endl;
    cout << "Value from pointer (dereferenced): " << *ptr_number << endl;
}

// -----------------------------
// Exercise 2: nullptr vs NULL - Function Overloading
// -----------------------------
class exercise_2
{
public:
    void print(int x)
    {
        cout << "\n[Exercise 2] Called int version\n";
    }

    void print(char *ptr)
    {
        cout << "[Exercise 2] Called pointer version\n";
    }
};

// -----------------------------
// Exercise 3: Null Pointer Safety Check
// -----------------------------
void exercise_3(int *ptr)
{
    cout << "\n[Exercise 3] Checking Pointer:\n";
    ((ptr == nullptr) ? cout << "nullptr" << endl : cout << "valid pointer" << endl);
}

// -----------------------------
// Exercise 4: Dynamic Memory Allocation and Cleanup
// -----------------------------
void exercise_4()
{
    cout << "\n[Exercise 4] Dynamic Memory:\n";

    int *x = new int(200); // Allocate an int and set value to 200

    cout << "Value allocated: " << *x << endl;
    cout << "Address of allocated memory: " << x << endl;

    delete x;    // Free the allocated memory
    x = nullptr; // Avoid dangling pointer

    cout << "After deletion, pointer is set to: " << x << endl;

    // Don't do this: dereferencing a nullptr causes segmentation fault
    // cout << *x;
}

// -----------------------------
// Main Function
// -----------------------------
int main()
{
    // Exercise 1
    exercise_1();

    // Exercise 2
    exercise_2 object;
    object.print(100);     // Calls int version
    object.print(nullptr); // Calls pointer version (nullptr is type-safe)

    // Exercise 3
    int x = 100;
    int *ptr_x = &x;
    int *ptr_null = nullptr;

    exercise_3(&x);
    exercise_3(ptr_x);
    exercise_3(ptr_null);

    // Exercise 4
    exercise_4();

    return 0;
}
