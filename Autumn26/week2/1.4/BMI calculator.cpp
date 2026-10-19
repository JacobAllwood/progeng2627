#include <iostream>

int main(){
    double weight, height, bmi;
    std::cout << "input your weight in kilograms:"<< std::endl;
    std::cin >> weight;
    std::cout << "input your height in metres:"<< std::endl;
    std::cin >> height;
    bmi = weight / (height*height);
    std::cout << "your BMI is "<<bmi<<"."<<std::endl;
}