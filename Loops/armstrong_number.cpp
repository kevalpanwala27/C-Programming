#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, r;
    cout << "Enter n: " << endl;
    cin >> n;
    int sum = 0;
    int m = n;
    int i;
    while (n>0) {
        r = n%10;
        n = n/10;
        sum = sum + r*r*r;
    }
    if (sum==m) {
        cout << "Its Armstrong" << endl;
    } else {
        cout << "Its not armstrong" << endl;
    }
    
        
    return 0;
}




