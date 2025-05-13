#include <iostream>
using namespace std;

int main()
{

    int arr[3] = {10, 20, 30};
    int *p = arr;

    cout << (p) << endl;      // 10
    cout << *(p + 0) << endl; // 10
    cout << (p + 1) << endl;  // 10
    cout << *(p + 1) << endl; // 20
    cout << *(p + 2) << endl; // 30
    // cout << &arr;

    return 0;
}