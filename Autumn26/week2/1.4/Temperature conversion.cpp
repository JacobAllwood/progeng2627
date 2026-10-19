#include <iostream>

int main(){
    double cel, far;
    std::cout << "input your temperature in degrees celsuis" << std::endl;
    std::cin >> cel;
    far = cel * (9 / 5) +32;
    std::cout << "your temperature is " << far << " degrees farenheit." << std::endl;
}