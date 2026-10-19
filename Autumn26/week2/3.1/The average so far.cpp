#include <iostream>
#include <iomanip>
using namespace std;//doing this because typing std:: is annoying ik i shoudnt

int main()
{
    int total = 0, cnt=0;
    int numbr;
    cout << setprecision(5);

    while (true){
        cout << "enter a number:\n";
        cin >> numbr;
        if(numbr==0) break;

        total+=numbr;
        cnt++;
        double averge = (double)total/cnt;

        cout<<"the average so far is:\n"<< averge <<endl;
    }
}