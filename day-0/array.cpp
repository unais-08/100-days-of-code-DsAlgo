// Program to find the smallest and largest elements in an array
#include <iostream>
using namespace std;

// Function to print the elements of the array
void printArray(int arr[], int n)
{
    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Function to find the smallest element in the array
int smallest_element_in_array(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// Function to find the largest element in the array
int largest_element_in_array(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "\n";
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n";

    // Output the smallest and largest elements
    cout << smallest_element_in_array(arr, n) << "\n";
    cout << largest_element_in_array(arr, n) << "\n";

    return 0;
}