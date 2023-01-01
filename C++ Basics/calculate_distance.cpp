#include <iostream>
using namespace std;

int main(int argc, const char** argv) 
{
    float v, u, a, distance;
    cin >> v >> u >> a;

    distance = (v*v - u*u)/(2 * a);
    cout << distance << endl;
    return 0;
}


