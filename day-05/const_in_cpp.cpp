#include <iostream>
using namespace std;

// ==========================================================
// 1. Concept: **const** Variable - Constant Value
// ==========================================================
void demonstrateConstVariable()
{
    const int CONSTANT_VALUE = 100;  // A constant variable whose value cannot be changed
    cout << "Constant value: " << CONSTANT_VALUE << endl;
    // CONSTANT_VALUE = 200;  // Error: Cannot modify a const variable
}

// ==========================================================
// 2. Concept: **const** Function Parameter
// ==========================================================
void demonstrateConstParameter(const int x)
{
    cout << "Received constant value: " << x << endl;
    // x = 50;  // Error: Cannot modify a const parameter
}

// ==========================================================
// 3. Concept: **const** Pointer (Pointer to Constant Data)
// ==========================================================
void demonstrateConstPointer()
{
    int a = 10;
    int b = 20;

    const int* ptr = &a;  // Pointer to constant data (cannot modify data through this pointer)
    cout << "Value pointed to by ptr: " << *ptr << endl;

    // *ptr = 30;  // Error: Cannot modify the value through a pointer to const
    ptr = &b;  // OK: Can change the pointer itself to point to a different address
    cout << "New value pointed to by ptr: " << *ptr << endl;
}

// ==========================================================
// 4. Concept: **const** Pointer (Constant Pointer)
// ==========================================================
void demonstrateConstantPointer()
{
    int a = 10;
    int b = 20;

    int* const ptr = &a;  // Constant pointer (cannot change the address it points to)
    *ptr = 50;            // OK: Can modify the value at the address

    cout << "Value pointed to by ptr: " << *ptr << endl;
    // ptr = &b;  // Error: Cannot reassign a constant pointer
}

// ==========================================================
// 5. Concept: **const** Pointer to **const** Data
// ==========================================================
void demonstrateConstPointerToConstData()
{
    int a = 10;
    const int* const ptr =
        &a;  // Const pointer to const data (cannot modify either the value or the pointer)

    // *ptr = 20;  // Error: Cannot modify the value
    // ptr = &a;   // Error: Cannot change the pointer to point elsewhere
    cout << "Value pointed to by const pointer: " << *ptr << endl;
}

// ==========================================================
// 6. Concept: **const** in Member Functions
// ==========================================================
class MyClass
{
   public:
    int value;

    MyClass(int val) : value(val) {}

    // Constant member function: cannot modify the object state
    void showValue() const
    {
        cout << "Object value: " << value << endl;
        // value = 50;  // Error: Cannot modify a class member in a const function
    }

    // Non-constant member function: can modify the object state
    void modifyValue(int newValue) { value = newValue; }
};

// ==========================================================
// 7. Concept: **const** in Function Overloading
// ==========================================================
void print(const int& x)
{
    cout << "Value: " << x << endl;
}

void print(int& x)
{
    x = 20;  // Modify the value passed as reference
    cout << "Modified value: " << x << endl;
}

// ==========================================================
// Main Function: Putting Everything Together
// ==========================================================
int main()
{
    // Demonstrating const variable
    demonstrateConstVariable();

    // Demonstrating const parameter
    const int num = 10;
    demonstrateConstParameter(num);

    // Demonstrating const pointer (pointer to constant data)
    demonstrateConstPointer();

    // Demonstrating constant pointer
    demonstrateConstantPointer();

    // Demonstrating const pointer to const data
    demonstrateConstPointerToConstData();

    // Demonstrating const in member functions
    MyClass obj(100);
    obj.showValue();
    obj.modifyValue(200);
    obj.showValue();

    // Demonstrating function overloading with const and non-const references
    int a = 30;
    print(a);  // Will call the non-const version and modify the value
    cout << "After print, a = " << a << endl;

    // Calling with a constant value
    const int b = 40;
    print(b);  // Will call the const version (no modification allowed)

    return 0;
}

/****

Explanation:
1. Constant Variable (const with variables):
What it does: A const variable holds a value that cannot be changed after its initialization. It's
used for constant values throughout the program.

Why use it: Ensures the value remains unchanged and is a safety mechanism to avoid accidental
modification.

2. Constant Function Parameters (const with function parameters):
What it does: The function parameter is read-only and cannot be modified within the function. This
ensures that the argument passed to the function cannot be changed.

Why use it: To preserve the integrity of data passed into functions, especially when working with
large data structures.

3. Pointer to const Data (const pointer):
What it does: You cannot modify the value that the pointer is pointing to, but you can change the
pointer to point to a different address.

Why use it: When you need to protect data from accidental modification through pointers but still
want the pointer to be re-assigned.

4. Constant Pointer (const pointer):
What it does: The pointer cannot change to point to a different address, but the value at the
pointed-to address can be modified.

Why use it: Useful when you want to keep a pointer fixed but still need to modify the data it points
to.

5. Pointer to Constant Data (const pointer to const data):
What it does: Both the pointer and the data it points to are immutable.

Why use it: When you need to ensure that neither the data nor the pointer can be changed (useful for
constant data in libraries or APIs).

6. Constant Member Functions (const in classes):
What it does: The member function does not modify the state of the object (i.e., no change to class
members).

Why use it: Ensures that the object state is not modified in read-only functions.

7. Function Overloading with const:
What it does: You can have multiple functions with the same name but different parameters (like
const vs. non-const references).

Why use it: It allows you to treat arguments as read-only (with const) or writable (without const),
which is very useful when optimizing for efficiency and safety.

Key Takeaways:
const is a tool for immutability, helping you protect values from being modified accidentally,
making your code safer and more predictable.

Pointers and const go hand in hand: You can have pointers that either point to mutable data,
constant data, or even both the pointer and the data being constant.

Function overloading with const allows for more efficient and clear code, especially when you want
to ensure that certain parameters are not changed.
****/