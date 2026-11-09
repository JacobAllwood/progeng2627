#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    std::string outputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);

    if(!infile.is_open()){
        std::cout<<"error occured opening text file.\n";
        return EXIT_FAILURE;
    }
    
    std::vector<int> v;
    int tmp;

    while(infile>>tmp){
        v.push_back(tmp);
    } 
    infile.close();

    std::cout<<"what is the file you would ike to output the data to?\n";

    std::cin>>outputfilename;

    std::ofstream outfile;

    outfile.open(outputfilename);

    if(!outfile.is_open()){
        std::cout<<"error occured opening text file.\n";
        return EXIT_FAILURE;
    }

    for (int i = v.size() - 1;i>=0;i--){
        outfile<<v[i];
    }
    
}