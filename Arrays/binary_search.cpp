// Elements must be in sorted manner.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[10] = {6,8,13,17,20,22,25,28,30,35};
    int low = 0, high = 9, key, mid;

    cout << "Enter key: ";
    cin >> key;

    while(low<=high) {
        mid = (low + high)/2;
        if(key==A[mid]) {
            cout << "Found at: " << mid;
            return 0;
        } else if(key<A[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}



