#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[7] = {4,7,2,6,1,9,5};
    int max = A[0];
    for (int i = 0; i < 7; i++) {
        if (A[i]>max){
            max = A[i];
        }
        
    }
    cout << max << endl;   
    return 0;
}



