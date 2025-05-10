#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void print_vector(vector<int> &v)
{
    for (int &ele : v)
    {
        cout << ele << " ";
    }
    cout << "\n";
}
int brute_force_second_largest_element(vector<int> &v)
{
    int n = v.size();
    int second_largest_element = INT_MIN;
    if (n <= 1)
    {
        return -1;
    }
    sort(v.begin(), v.end()); // NlogN
    int largest = v[n - 1];
    // print_vector(v);
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] != largest)
        {
            second_largest_element = v[i];
            break;
        }
    }
    return (second_largest_element == INT_MIN) ? -1 : second_largest_element;
}

int better_approach_second_largest_element(vector<int> &v)
{
    int n = v.size();
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    // O(n)
    for (int i = 0; i < n; i++)
    {
        if (v[i] > largest)
        {
            largest = v[i];
        }
    }
    // O(n)
    for (int i = 0; i < n; i++)
    {
        if (v[i] < largest && v[i] > second_largest)
        {
            second_largest = v[i];
        }
    }
    return (second_largest == INT_MIN) ? -1 : second_largest;
}

int optimal_approach_second_largest_element(vector<int> &v)
{
    int largest = v[0];
    int second_largest = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < largest && v[i] > second_largest)
        {
            second_largest = v[i];
        }
        else if (v[i] > largest)
        {
            second_largest = largest;
            largest = v[i];
        }
    }
    return second_largest;
}
int main()
{
    vector<int> arr = {1, 2, 5, 3, 4, 6, 7, 8, 8, 1};
    cout << "O(N^2): " << brute_force_second_largest_element(arr) << "\n";
    cout << "O(2N): " << better_approach_second_largest_element(arr) << "\n";
    cout << "O(N): " << optimal_approach_second_largest_element(arr) << "\n";
    return 0;
}