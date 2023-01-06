#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cin >> age;

    if(age>=12 && age<=50) {
        cout << "young" << endl;
    }else {
        cout << "not young" << endl;
    }
    
    return 0;
}



