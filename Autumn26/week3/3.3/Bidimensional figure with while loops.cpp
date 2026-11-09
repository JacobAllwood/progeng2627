#include <iostream>

using namespace std;

int main() {
    int num;

    int count = 1;

    cout << "Enter a number:\n ";
    cin >> num;

    for (int i = 1; i <= num; i ++){
        for (int j = 1; j <= num; j++){
            cout<< count << "\t";
            count++;
        }
        cout << endl;
    }
}