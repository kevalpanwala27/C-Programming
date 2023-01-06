#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, factorial = 1, n;
    cin >> n;

    for ( i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "factorial is: " << factorial << endl;    
    return 0;
}
