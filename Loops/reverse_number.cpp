#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, r, rev = 0, m;
    cout << "Enter n: " << endl;
    cin >> n;

    m = n;
    while (n>0) {
        r = n%10;
        n = n/10;
        rev = rev*10 + r;
    }
    cout << "Reverse is: " << rev << endl;
        
    return 0;
}
