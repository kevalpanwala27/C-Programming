#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[5] = {1,2,3,4,5};
    int *p;
    p = new int[5];   
    p = A;
    // p[0] = 1; // We can also do like this.
    // p[1] = 2; // We can also do like this.
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}

