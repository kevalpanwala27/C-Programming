#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[5] = {2,4,6,8,10};
    int *p = A;

    cout << *p << endl;
    p++;
    cout << *p << endl;
    p--;
    cout << *p << endl;


    cout << p << endl;   // this will display address.
    cout << p+2 << endl; // this will display address.
    return 0;
}





