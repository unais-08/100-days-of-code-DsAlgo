/**
 * @file vector.cpp
 * @brief Demonstrates basic usage of std::vector in C++ including I/O operations,
 *        vector properties, and utility functions.
 *
 * This program includes examples of:
 * - Accessing vector properties like size, capacity, and elements.
 * - Using range-based for loops and traditional for loops for vector I/O.
 * - Utility functions like push_back and at.
 *
 * Complexity Analysis:
 * - print_vector: O(n), where n is the size of the vector.
 * - range_based_for_loop_IO_vector: O(n), where n is the number of characters.
 * - for_loop_IO_vector: O(n), where n is the number of integers.
 * - main: Demonstrates vector operations with constant or linear complexity.
 */
#include <iostream>
#include <vector>
using namespace std;
void print_vector(vector<int> &numbers)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << "\n";
}
void range_based_for_loop_IO_vector()
{
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;
    cout << "\nEnter the characters: ";
    vector<char> characters(n);
    vector<int> numbers;
    for (char &c : characters)
    {
        cin >> c;
    }

    cout << "\n";
    for (char &c : characters)
    {
        cout << c << " ";
    }
    cout << "\n";
}
void for_loop_IO_vector()
{
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    vector<int> numbers;
    cout << "\nEnter the integers: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers.push_back(x);
    }

    cout << "\n";
    print_vector(numbers);
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "The size of the vector is: " << numbers.size() << "\n";
    cout << "The capacity of the vector is: " << numbers.capacity() << "\n";
    cout << "The max size of the vector is: " << numbers.max_size() << "\n";
    cout << "The front of the vector is: " << numbers.front() << "\n";
    cout << "The back of the vector is: " << numbers.back() << "\n";
    cout << "The first element of the vector is: " << numbers.at(0) << "\n";
    cout << "The last element of the vector is: " << numbers.at(numbers.size() - 1) << "\n";
    cout << "The elements of the vector are: ";
    numbers.push_back(6);
    cout << "The capacity of the vector is: " << numbers.capacity() << "\n";
    cout << "\n";
    range_based_for_loop_IO_vector();
    for_loop_IO_vector();
    return 0;
}