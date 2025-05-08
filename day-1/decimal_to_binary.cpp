
/**
@file decimal_to_binary.cpp
@brief Converts decimal numbers to binary and vice versa.
@details
This program includes two functions:
1. `decimal_to_binary`: Converts a decimal number to binary.
2. `binary_to_decimal`: Converts a binary number to decimal.
The main function demonstrates the usage of these functions by converting numbers from 1 to 10 to binary and vice versa.
**/

#include <iostream>
#include <cmath>
using namespace std;

// Function to convert a decimal number to binary
int decimal_to_binary(int decimal)
{
    int power = 1; // Tracks the place value in binary (1, 10, 100, ...)
    int ans = 0;   // Stores the binary result
    while (decimal > 0)
    {
        int remainder = decimal % 2; // Get the last binary digit
        decimal /= 2;                // Reduce the decimal number
        ans += remainder * power;    // Add the binary digit to the result
        power *= 10;                 // Move to the next place value
    }
    return ans;
}

// Function to convert a binary number to decimal
int binary_to_decimal(int binary)
{
    int ans = 0;   // Stores the decimal result
    int power = 0; // Tracks the power of 2 (2^0, 2^1, 2^2, ...)
    while (binary != 0)
    {
        int lastDigit = binary % 10;             // Extract the last binary digit
        binary = binary / 10;                    // Remove the last binary digit
        ans = ans + lastDigit * (pow(2, power)); // Add the decimal equivalent
        power++;                                 // Increment the power of 2
    }
    return ans;
}

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        cout << decimal_to_binary(i) << " "; // Print binary of numbers from 0 to 9
    }

    cout << "Decimal to Binary: ";
    cout << decimal_to_binary(20); // Convert 20 to binary
    cout << "\n";
    cout << "Binary to Decimal: ";
    cout << binary_to_decimal(10100); // Convert 10100 (binary) to decimal
    cout << "\n";
    return 0;
}