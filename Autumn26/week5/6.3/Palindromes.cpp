#include <iostream>
#include <string>
#include <vector>

// for std::pair
#include <utility>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string s){
    std::vector<char> v;
    std::vector<char> vr;
    for(char c: s){
        if(c != ' '){
            v.push_back(c);
        }
    }
    for(int  i = v.size() -1;i>=0;i--){
        vr.push_back(v[i]);
    }
    for(int j = 0; j < v.size(); j++){
        if(v[j] != vr[j]){
            return false;
        }
    }
    return true;
}

int main(){

    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){
        // each variable of type std::pair has two fields called first and second

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
} 