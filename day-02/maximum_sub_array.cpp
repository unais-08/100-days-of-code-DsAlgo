#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int max_sub_array_sum_brute_force(vector<int> &v)
{
    int n = v.size();
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int max_sub_array_sum_kadane_algo(vector<int> &v)
{
    int max_sum = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        curr_sum += v[i];
        max_sum = max(curr_sum, max_sum);
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    return max_sum;
}

int main()
{
    // vector<int> v = {3, -4, 5, 4, -1, 7, -8};
    vector<int> v = {-4, -1, -8};
    cout << max_sub_array_sum_brute_force(v) << "\n";
    cout << max_sub_array_sum_kadane_algo(v) << "\n";
    return 0;
}