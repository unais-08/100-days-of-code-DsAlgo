#include <iostream>
using namespace std;

// ---------------------------------------------------
// Exercise 1: Accessing Elements in Array using Pointers
// ---------------------------------------------------
void T1()
{
    int arr[] = {1, 24, 3};
    int *ptr = arr;

    cout << "\n[Exercise 1] Pointer Access in Array:\n";

    // Access second element using pointer arithmetic
    cout << "*(ptr + 1): " << *(ptr + 1) << endl;

    // Same as above but using array name directly
    cout << "*(arr + 1): " << *(arr + 1) << endl;

    // Address of the whole array
    cout << "&arr: " << &arr << endl;

    // Address stored in pointer (should be same as &arr[0])
    cout << "ptr: " << ptr << endl;
}

// ---------------------------------------------------
// Exercise 2: Traversing Array using Pointer Loop
// ---------------------------------------------------
void T2()
{
    int arr[] = {2, 34, 5, 6, 100, 2, 46, 3, 4};
    int *ptr = arr;
    int n = sizeof(arr) / sizeof(int); // Calculate number of elements

    cout << "\n[Exercise 2] Traversing Array with Pointer:\n";

    // Pointer-style loop through array
    for (int *ptr_arr = arr; ptr_arr < arr + n; ++ptr_arr)
    {
        cout << *ptr_arr << " ";
    }
    cout << endl;
}
// --------------------------------------------
// Exercise 1: Access array using pointers
// --------------------------------------------
void exercise_1()
{
    int arr[] = {1, 24, 3};
    int *ptr = arr;

    cout << "\n[Exercise 1] Pointer Access in Array:\n";
    cout << "*(ptr + 1): " << *(ptr + 1) << endl; // 24
    cout << "*(arr + 1): " << *(arr + 1) << endl; // 24
    cout << "&arr: " << &arr << endl;             // address of whole array
    cout << "ptr: " << ptr << endl;               // address of first element
}

// --------------------------------------------
// Exercise 2: Traverse array using pointer
// --------------------------------------------
void exercise_2()
{
    int arr[] = {2, 34, 5, 6, 100, 2, 46, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << "\n[Exercise 2] Traversing Array with Pointer:\n";
    for (int *ptr = arr; ptr < arr + n; ++ptr)
    {
        cout << *ptr << " ";
    }
    cout << endl;
}

// --------------------------------------------
// Exercise 3: Reverse array using pointers
// --------------------------------------------
void exercise_3()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int *left = arr;
    int *right = arr + n - 1;

    cout << "\n[Exercise 3] Reverse Array using Pointers:\n";

    // Reverse using pointer swapping
    while (left < right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    // Print reversed array
    for (int *ptr = arr; ptr < arr + n; ++ptr)
    {
        cout << *ptr << " ";
    }
    cout << endl;
}

// --------------------------------------------
// Exercise 4: strlen implementation using char*
// --------------------------------------------
int custom_strlen(const char *str)
{
    const char *temp = str;
    while (*temp != '\0')
    {
        temp++;
    }
    return temp - str;
}

void exercise_4()
{
    const char *msg = "Hello, Unais!";
    int length = custom_strlen(msg);

    cout << "\n[Exercise 4] Custom strlen using Pointer:\n";
    cout << "String: " << msg << "\nLength: " << length << endl;
}

// --------------------------------------------
// Exercise 5: Count vowels using char*
// --------------------------------------------
bool is_vowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void exercise_5()
{
    const char *str = "Programming is Fun!";
    int count = 0;

    const char *ptr = str;
    while (*ptr != '\0')
    {
        if (is_vowel(*ptr))
            count++;
        ptr++;
    }

    cout << "\n[Exercise 5] Count Vowels in String using Pointer:\n";
    cout << "String: " << str << "\nVowel Count: " << count << endl;
}
// ---------------------------------------------------
// Main Function: Calls all Exercises
// ---------------------------------------------------
int main()
{
    T1(); // Run pointer basics with array
    T2(); // Run pointer traversal of array
    exercise_1();
    exercise_2();
    exercise_3();
    exercise_4();
    exercise_5();
    return 0;
}

// --------------------------------------------
// Main Function: Calls all exercises
// --------------------------------------------
