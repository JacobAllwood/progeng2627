#include <iostream>
using namespace std;//again im sorry

int main(){
    int a,b;
    cout << "enter the dividend:\n";
    cin >> a;
    cout << "enter the divisor:\n";
    cin>>b;

    int quotent = 0;
    int remaindr = a;

    while (remaindr >= b)
    {
        remaindr = remaindr - b;
        quotent++;
    }

    cout << "quotient: " << quotent << endl;
    cout <<"remainder: "<< remaindr << endl;
}