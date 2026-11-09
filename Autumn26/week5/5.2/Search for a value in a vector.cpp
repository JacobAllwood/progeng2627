#include <iostream>
#include <cmath>
#include <vector>


int search_vector(double n, const std::vector<double>& vin) {
    const double eps= 1e-9;
    for (int i = 0; i< vin.size(); i++) {
        if (std::abs(vin[i] -n) <eps){
            return i;
        }
    }
    return-1;
}
int main(){
    std::vector<double> v{1, 0.3, 3, -1};

    double a = (0.5 - 0.4) + 0.1 +0.1;
    std::cout<<(search_vector(a, v));
}