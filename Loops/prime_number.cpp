#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int count = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n%i==0) {
            count++;
        }
        
    }
    if (count==2) {
        cout << "Prime" << endl;
    } else {
        cout << "not prime" << endl;
    }
    
    
    return 0;
}

