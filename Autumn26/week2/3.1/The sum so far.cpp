#include <iostream>
using namespace std;

int main(){
    int total=0;
    int numbr;

    while(true) {
        cout << "enter a number:\n";
        cin>>numbr;
        if (numbr == 0)  break;

        total += numbr;
        cout << "the sum so far is:\n" <<total<< endl;
    }
}