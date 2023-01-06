#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m1, m2, m3;
    cin >> m1 >> m2 >> m3;

    int total = m1 + m2 + m3;
    int avg = total/3;
    if(avg>=60) {
        cout << "A" << endl;
    }else if (avg>=35 && avg<=60) {
        cout << "B" << endl;
    } else {
        cout << "C" << endl;
    }
    return 0;
}
