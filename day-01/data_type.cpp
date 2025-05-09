#include <iostream>
using namespace std;
/**
 * @file data_type.cpp
 * @brief Demonstrates the usage of the sizeof operator to determine the size of various data types in C++.
 *
 * This program prints the size (in bytes) of the following data types:
 * - int
 * - char
 * - float
 * - double
 * - bool
 * - short
 * - long
 * - long long
 *
 * @details
 * The sizes of these data types may vary depending on the system architecture and compiler implementation.
 * The output shown in the comments is based on a typical 64-bit system.
 */
int main()
{
    cout << sizeof(int) << endl;       // 4
    cout << sizeof(char) << endl;      // 1
    cout << sizeof(float) << endl;     // 4
    cout << sizeof(double) << endl;    // 8
    cout << sizeof(bool) << endl;      // 1
    cout << sizeof(short) << endl;     // 2
    cout << sizeof(long) << endl;      // 8
    cout << sizeof(long long) << endl; // 8

    return 0;
}