#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 3; i++) // For rows.
    {
        for (int j = 1; j <= 5; j++) // For columns.
        {
            cout << "("<< i << "," << j << ")"<< " ";
        }
        cout << endl;
    }
    
    return 0;
}



