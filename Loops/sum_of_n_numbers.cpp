#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, sum = 0, n;
    cin >> n;
    for ( i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}

