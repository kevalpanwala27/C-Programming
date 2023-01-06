#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;
    cout << "ENter two numbers: " << endl;
    cin >> m >> n;

    while (m!=n) {
        if (m>n) {
            m = m-n;
        } else if (n>m) {
            n = n-m;
        }
        
    }
    cout << m;
    return 0;
}




