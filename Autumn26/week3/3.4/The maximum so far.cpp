#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int input, max, min;
    while (input !=0){
        std::cout<<"input a number: \n";
        std::cin >> input;

        min = std::min(input, min);
        max = std::max(input, max);

        std::cout<<"maximum so far: "<<max<<
                 "\nmimimum so far: "<<min<<
                 std::endl;
    }
}