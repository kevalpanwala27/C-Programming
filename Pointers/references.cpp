// reference is nothing but a nickname to a variable.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 10;
    int &y = x;

    cout << x << endl;
    cout << y << endl;
    x++;
    cout << y << endl;

    return 0;
}


