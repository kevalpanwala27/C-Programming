#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j>=n-1)
                cout<<"x ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }    
    return 0;
}




