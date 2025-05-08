/**
 * @file power_of_two.cpp
 * @brief Checks if a number is a power of two using bitwise operations.
 *
 * This program defines a function `isPowerOfTwo` that checks if a given integer
 * is a power of two. The main function demonstrates the usage of this function.
 */
#include <iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{
    cout << isPowerOfTwo(32);
    cout << "\n";
    return 0;
}