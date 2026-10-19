#include <iostream>

int main (){
    double a;
    int n;

    std::cout << "input a number(x) and a multiplier(n). input should look like(x n)." << std::endl;
    std::cin >> a >> n;

    std::cout << "a:" << a << "n:" << n <<std::endl;
    int b = 0;
    double c = 0;
    while(b < n){
        c += a;
        b++;
    }
    std::cout << "your number is " << c << "."<<std::endl;
}