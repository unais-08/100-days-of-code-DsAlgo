#include <iostream>
using namespace std;

// Function to perform linear search
// Takes an array, its size, and the target element to search for
int linear_search(int arr[], int n, int target)
{
    // Iterate through the array
    for (int i = 0; i < n; i++)
    {
        // Check if the current element matches the target
        if (arr[i] == target)
        {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main()
{
    // Initialize an array of integers
    int arr[] = {200, 100, 300, 400, 500};
    int target;                           // Variable to store the target element
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Prompt the user to enter the element to search for
    cout << "Element to be searched: \n";
    cin >> target;

    // Perform linear search and store the result
    int ans = linear_search(arr, n, target);

    // Output the result of the search
    if (ans != (-1))
        cout << "Element found at index: " << ans << "\n";
    else
        cout << "Element not found\n";

    return 0; // Indicate successful program termination
}