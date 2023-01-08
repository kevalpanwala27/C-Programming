#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[5] = {2,4,6,8,10};
    for (int i = 0; i < 5; i++) {
        cout << A[i] << endl;
    }
    cout << endl;
    // For each loop.

    for (int x:A) {
        cout << x << endl;
    }
    
    return 0;
}

