#include <iostream>
using namespace std;

int main() {
    int a = 10;      // normal variable
    int *p;          // pointer variable

    p = &a;          // store address of a in pointer

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p stores address: " << p << endl;
    cout << "Value using pointer (*p): " << *p << endl;

    return 0;
}