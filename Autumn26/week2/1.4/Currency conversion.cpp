#include <iostream>

int main(){
    double pounds, euros;
    std::cout << "input amount of british pounds:" << std::endl;
    std::cin >> pounds;
    euros = pounds * 1.19;
    std::cout << "your pounds are worth " << euros << " euros." << std::endl;
}