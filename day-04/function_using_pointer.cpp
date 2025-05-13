#include <iostream>
using namespace std;

// ---------------------------------------------
// Function: updateByValue
// Description: Demonstrates pass-by-value (no effect on original)
// ---------------------------------------------
void updateByValue(int value)
{
    value = 100; // Only modifies the local copy
}

// ---------------------------------------------
// Function: updateByPointer
// Description: Modifies the original variable via pointer
// ---------------------------------------------
void updateByPointer(int *ptr)
{
    *ptr = 100; // Modifies the original value
}

// ---------------------------------------------
// Function: printArray
// Description: Prints elements of an integer array using a pointer
// ---------------------------------------------
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ---------------------------------------------
// Function: createDynamicArray
// Description: Dynamically allocates and returns integer array
// ---------------------------------------------
int *createDynamicArray(int size)
{
    int *arr = new int[size]; // Allocate on heap
    return arr;
}

// ---------------------------------------------
// Main Program
// ---------------------------------------------
int main()
{
    // Demonstrate pass-by-value vs pass-by-pointer
    int number = 10;

    updateByValue(number); // Won’t change the original value
    cout << "[After updateByValue] number = " << number << endl;

    updateByPointer(&number); // Changes the original
    cout << "[After updateByPointer] number = " << number << endl;

    // Working with static array
    int marks[] = {50, 50, 90};
    int staticArraySize = sizeof(marks) / sizeof(int);

    cout << "\nMarks (Static Array): ";
    printArray(marks, staticArraySize);

    // Working with dynamically allocated array
    int dynamicSize = 5;
    int *dynamicArray = createDynamicArray(dynamicSize);

    cout << "\nEnter " << dynamicSize << " numbers: ";
    for (int i = 0; i < dynamicSize; ++i)
    {
        cin >> dynamicArray[i];
    }

    cout << "Dynamic Array Contents: ";
    printArray(dynamicArray, dynamicSize);

    // Free allocated memory (good practice!)
    delete[] dynamicArray;

    return 0;
}
