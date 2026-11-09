#include <iostream>
#include <random>
#include <algorithm>

int main() {
    std::random_device rd;                         
    std::mt19937 gen(rd());                        
    std::uniform_int_distribution<int> dist(-2147483648, 2147483647);

    int max = 2147483647;
    int min = -2147483648;
    int guess = dist(gen);
    bool correct = false;
    bool higher;
    while(!correct){
        std::cout<<"is your number "<<guess<<"? 1 for yes, 0 or no.\n";
    
        std::cin>>correct;
        if(correct == false){
            std::cout<<"is my guess higher than your number? 1 for yes 0 for no.\n";
            std::cin>>higher;
            if (higher){
                max = std::min(max, guess);
            }
            else{
                min = std::max(min, guess);
            }
        }
        guess = (max + min + 1) / 2;
    }
}