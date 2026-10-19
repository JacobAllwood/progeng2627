#include <iostream>

using namespace std;//i said im sorry

int main() {
    int base, exponent;
    cout << "Enter the base:\n";
    cin >> base;
    cout << "Enter the exponent:\n";
    cin >> exponent;

    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    cout << base << "^" << exponent << " = " << result << endl;
}