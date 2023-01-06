#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cin >> age;

    if(age<12 || age>55) {
        cout << "eligible" << endl;
    }else {
        cout << "not eligible" << endl;
    }
    return 0;
}




