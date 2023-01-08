// Pointers are that type of variables that 
// is used to store the address of data.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 10;
    int *p; // Declaration.
    p = &x; // Initialization.

    cout << *p << endl; // Dereferencing.
    cout << x << endl;


    cout << &p << endl; // this is print address.
    cout << p << endl;  // this is print address.
    cout << &x << endl; // this is print address.

    return 0;
}


