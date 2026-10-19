#include <iostream>

using namespace std;//:(

int main() {
    int n;
    cout << "Enter a nonnegative integer:\n";
    cin >> n;
     long long nfac = 1;
    for (int i = 1; i<=n;i++){
        nfac*= i;
    }
    cout << n << "! = " << nfac <<endl; 
}