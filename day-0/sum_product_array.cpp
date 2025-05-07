/**
 * This program calculates and prints the sum and product of elements in an array.
 *
 * Problem Statement:
 * - Given an array of integers, compute:
 *   1. The sum of all elements in the array.
 *   2. The product of all elements in the array.
 * - The results are displayed on separate lines.
 */
#include <iostream>
using namespace std;

int sum_of_array(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int product_of_array(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << sum_of_array(arr, n);
    cout << "\n";
    cout << product_of_array(arr, n);
    cout << "\n";
    return 0;
}