#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    int c = a/b;
    if(b==0) {
        cout << "Division by zero" << endl;
    }else {
        cout << c << endl;
    }
    return 0;
}


