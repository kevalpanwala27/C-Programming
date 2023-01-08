#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    
    return 0;
}

