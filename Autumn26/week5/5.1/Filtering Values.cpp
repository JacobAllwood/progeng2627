#include <iostream>
#include <vector>

int main(){
    int n, b, t;
    std::vector<int> v;
    std::cout<<"input vector size:\n";
    std::cin >>n;

    int a = 0;

    while(a < n){
        std::cin >>b;
        v.push_back(b);
        a++;
    }
    std::cout<<"give an upper bound for numbers in your vector.\n";
    std::cin>>t;
    
    for (int c : v){
        if (c < t){
            std::cout<<c<<", ";
        }
    }
}