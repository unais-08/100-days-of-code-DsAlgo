// Program to reverse an array and print the result
#include <iostream>
using namespace std;

void reverse_array(int arr[], int n)
{
    int start = 0, end = n - 1; // Initialize pointers for swapping
    while (start < end)
    {
        swap(arr[start], arr[end]); // Swap elements at start and end
        start++;
        end--;
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Print each element of the array
    }
    cout << "\n";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    reverse_array(arr, n);                // Reverse the array
    print_array(arr, n);                  // Print the reversed array

    return 0;
}