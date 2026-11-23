#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(int argc, char* argv[]){

    std::fstream infile;
    infile.open(argv[1]);

    if(!infile.is_open()){
        std::cout<<"error occured opening text file.\n";
        return EXIT_FAILURE;
    }

    std::vector<std::string> v;
    std::string tmp;

    while(infile>>tmp){
        v.push_back(tmp);
    }
    infile.close();

    for (std::string i : v){
        std::cout<<i<<std::endl;
    }
}