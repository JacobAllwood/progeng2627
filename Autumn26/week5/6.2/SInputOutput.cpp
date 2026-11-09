#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);

    if (!infile.is_open()){
        std::cout<<"issue opening file.";
        return EXIT_FAILURE;
    }

    int tmp;
    std::vector<int>v;

    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();

    std::cout<<"wich file would you like to pase values to?\n";

    std::string outputfilename;
    std::cin>>outputfilename;

    std::ofstream outfile;
    outfile.open(outputfilename);

    for(int i = v.size()-1; i>=0; i-- ){
        
    }
}