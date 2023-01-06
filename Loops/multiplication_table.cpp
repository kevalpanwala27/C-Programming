#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Enter number: " << endl;
    cin >> n;
    for ( i = 1; i <= 10; i++) {
        cout << n << "x" << i << "=" << i*n << endl;
    }   
    return 0;
}

