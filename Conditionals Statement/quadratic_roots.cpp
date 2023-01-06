#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;

    d = b*b - 4*a*c;
    if(d==0) {
        cout << "roots are real and equal" << endl;
    } else if (d>0) {
        cout << "roots are real and unequal" << endl;   
    } else if(d<0) {
        cout << "roots are imaginary" << endl;
    }
    return 0;
}

