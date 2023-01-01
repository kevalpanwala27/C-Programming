#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int basic_salary, POA, POD;
    cin >> basic_salary >> POA >> POD;

    int net_salary = basic_salary +(basic_salary*POA/100 - basic_salary*POD/100);
    cout << net_salary << endl;
    return 0;
}


