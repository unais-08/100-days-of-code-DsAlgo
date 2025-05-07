// This program demonstrates the use of C++ STL vectors and templates to create a generic function
// for printing vector elements. It also shows basic vector operations like initialization,
// adding elements, and iterating through the vector.

#include <iostream>
#include <vector>
using namespace std;

// Template function to print elements of a vector
template <typename T>
void print_vector(vector<T> &v, int n)
{
    // Loop through the vector and print each element
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " "; // Print each element of the vector
    }
    cout << "\n"; // Print a newline after the vector elements
}

int main()
{
    // Initialize a vector of integers with 5 elements, all set to 10
    vector<int> v(5, 10);

    // Initialize a vector of characters with specific elements
    vector<char> c = {'a', 'b', 'c', 'd', 'e'};

    // Print the integer vector using the template function
    print_vector(v, v.size());

    // Print the character vector using the template function
    print_vector(c, c.size());

    // Add a new element 'f' to the character vector
    c.push_back('f');

    // Iterate through the character vector and print each element
    for (int i : c)
    {
        cout << (char)(i) << " "; // Cast to char and print each element
    }
    cout << "\n"; // Print a newline after the vector elements

    return 0; // Indicate successful program termination
}