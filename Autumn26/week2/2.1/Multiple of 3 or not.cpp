#include <iostream>

int main(){
    int input;
    std::cout << "input an integer:"<<std::endl;
    std::cin >> input;
    if(input % 3 == 0){
        std::cout << input << " is a multiple of 3.";
    }
    else{
        std::cout << input << " is not a multiple of 3.";
    }
}