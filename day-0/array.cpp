#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

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

    cout << smallest_element_in_array(arr, n) << "\n";
    cout << largest_element_in_array(arr, n) << "\n";

    return 0;
}