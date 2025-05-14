#include <iostream>
using namespace std;

// 🚀 Exercise 1: Take `n` integers as input, store dynamically, and print their
// sum
void exercise_1(int n)
{
    int* numbers = new int[n];  // dynamically allocated array

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    cout << "\nSum of elements: " << sum << endl;

    delete[] numbers;  // ✅ Avoid memory leak
}

// 🚀 Exercise 2: Create and return an array of squares from 0 to n-1
int* exercise_2(int n)
{
    int* squares = new int[n];  // dynamically allocate array

    for (int i = 0; i < n; i++)  // use 0-based indexing
    {
        squares[i] = i * i;
    }

    return squares;  // ⚠️ Caller must delete[] this memory
}

int main()
{
    // Exercise 1: Input and sum
    exercise_1(5);

    // Exercise 2: Create dynamic array of squares and print it
    int* result = exercise_2(5);

    cout << "\nSquares from 0 to 4: ";
    for (int i = 0; i < 5; i++)  // corrected indexing (was starting from 1)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] result;  // ✅ Free dynamically allocated memory

    return 0;
}
