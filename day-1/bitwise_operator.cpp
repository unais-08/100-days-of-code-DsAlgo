#include <iostream>
using namespace std;

int main()
{
    int a = 6; // 0101 in binary
    int b = 10; // 0011 in binary

    cout << "Bitwise AND: " << (a & b) << endl; // 0001 in binary, which is 1
    cout << "Bitwise OR: " << (a | b) << endl;  // 0111 in binary, which is 7
    cout << "Bitwise XOR: " << (a ^ b) << endl; // 0110 in binary, which is 6
    cout << "Bitwise NOT: " << (~a) << endl;    // Inverts bits of a

    return 0;
}