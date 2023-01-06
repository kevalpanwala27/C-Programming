#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, n;
    cout << "Enter number: " << endl;
    cin >> n;

    for ( i = 1; i <= n; i++) {
        if (n%i==0){
            cout << i << endl;
        }
        
    }
    
    return 0;
}

