#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[5] = {1,2,3,4,5};
    int i, sum = 0;
    for ( i = 0; i < 5; i++) {
        sum = sum + A[i];
    }
    cout << sum << endl;
    
    return 0;
}
