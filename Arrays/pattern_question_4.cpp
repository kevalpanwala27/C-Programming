#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i+j>=3)
            {
                cout << "x";
            }else {
                cout << " ";
            }
            
        }
        cout << endl;
        
    }
        
    return 0;
}

