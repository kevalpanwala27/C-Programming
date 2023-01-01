#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float a, b, c;
    cin >> a >> b >> c;

    float x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    cout << x1 << endl;
    return 0;
}

