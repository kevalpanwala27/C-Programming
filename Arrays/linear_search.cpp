#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[10];
    int key;
    cout << "Enter number: ";
    int n = 10, i;
    for ( i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << "Enter key: ";
    cin >> key;

    for ( i = 0; i < n; i++)
    {
        if (key==A[i])
        {
            cout << "Found at: " << i << endl;
        }
        
    }
    cout << "Not found" << endl;
    return 0;
}



