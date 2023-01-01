#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i=5;
    int j;
    // j = i++;    // Post increment.
    j = ++i;    // Pre increment.   
    cout << i << endl;
    cout << j << endl;
    return 0;
}

