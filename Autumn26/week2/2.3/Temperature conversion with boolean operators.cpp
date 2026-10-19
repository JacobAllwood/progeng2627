#include <iostream>
#include <string>
double cel_to_far(double temp){
    return temp * (9.0 / 5.0) + 32;
}
    
double far_to_cel(double temp){
    return (temp - 32.0) * (5.0 / 9.0);
}
int main(){

    double temp_in, temp_out;
    char unit_in;
    std::string unit_out;

    std::cout << "enter a temperatre and unit" << std::endl;

    std::cin >> temp_in >> unit_in;

    bool valid_unit = true;

    if(std::toupper(unit_in) == 'C'){
        unit_out = "farenheit";
        temp_out = cel_to_far(temp_in);

    }
    else if( std::toupper(unit_in) == 'F' ){ // the || means "or"
        unit_out = "celcuis";
        temp_out = far_to_cel(temp_in);
    }
    else{
        valid_unit = false;
    }


    if(valid_unit){
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }
}