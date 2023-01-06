#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int hours;
    cin >> hours;

    if(hours>=9 && hours<=18) {
        cout << "Working";
    }else {
        cout << "Leisure" << endl;
    }
    return 0;
}




