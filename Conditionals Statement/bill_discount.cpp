#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float discountAmount, amount;

    if(amount>=5000) {
        discountAmount = amount - amount*20/100;
        cout << discountAmount << endl;
    }else if(amount>=2000 && amount<=5000) {
        cout << discountAmount << endl;
    }else {
        cout << discountAmount << endl;
    }
    return 0;
}


