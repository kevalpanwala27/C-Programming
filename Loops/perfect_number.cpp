#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n%i==0) {
            sum += i;
        }
        
    }
    if (sum==2*n) {
        cout << "perfect" << endl;
    } else {
        cout << "not perfect" << endl;
    }
    
    
    return 0;
}


