#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Menu" << endl;
    cout << "1. Add\n" << "2. Sub\n" << "3. Mul\n" << "4. Div\n";

    int option;
    cout << "Enter your choice" << endl;
    cin >> option;

    int a, b, c;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    switch(option) {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a*b;
        break;
        case 4:c=a/b;
        break;
    }
    cout << "Result is: " << c << endl;

    return 0;
}




