#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, n, r;
    cout << "Enter n: " << endl;    
    cin >> n;

    while (n>0) {
        r = n%10;
        n = n/10;
        cout << r << endl;
    }
    
    return 0;
}


