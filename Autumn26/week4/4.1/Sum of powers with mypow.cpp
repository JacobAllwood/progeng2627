#include <iostream>


double int_pow(double base, int exp){
    double a = 1;
    
    if (exp > 0){
        for (int i = 1; i <= exp; i++){
            a *= base;
        }
    }
    else if (exp < 0){
        for (int j = 1; j <= -exp; j ++ ){
            a /= base;
        }
    }
    return a;
}
int main(){
    int x;
    double n;
    double num=0;

    std::cout<<"input your base and sum respectively(base double, sum int):\n";
    std::cin>> x>>n;

    for (int i=1; i<= n; i++){
        num += int_pow(x, i);
    }
    std::cout<<"your sum of powers are: "<<num<<".";

}