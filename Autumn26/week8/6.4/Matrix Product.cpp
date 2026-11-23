#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iomanip>
#include <fstream>

std::vector<double> LineToVector(std::string s){
    std::stringstream ss;
    std::string tmp;
    std::vector<double> v;

    ss << s;

    while(ss>>tmp){
        v.push_back(stod(tmp));
    }
    return v;
}

std::vector<std::vector<double>> FileToMat(std::string FileName){
    std::ifstream Ifile;

    Ifile.open(FileName);

    if(!Ifile.is_open()){
        std::cout<<"error opening "<<FileName;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> v;

    while (std::getline(Ifile, line)){
        v.push_back(LineToVector(line));
    }
    return v;
}

std::vector<double> MatCol(
    const std::vector<std::vector<double>>& mat,
    int ColNum //Zero indexed
){
    std::vector<double> v;
    for (std::vector<double> i : mat){
        v.push_back(i[ColNum]);
    }
    return v;
}

std::vector<double> MatRow(
    const std::vector<std::vector<double>>& mat,
    int Row //Zero indexed
){
    return mat[Row];
}

double Dproduct (std::vector<double> v1, std::vector<double> v2){
    double Product = 0;
    
    for (int i = 0; i<v1.size(); i++){
        Product += v1[i]*v2[i];
    }
    return Product;
}

std::vector<std::vector<double>> MatProduct (
    const std::vector<std::vector<double>>& m1,
    const std::vector<std::vector<double>>& m2
){
   if(m1[0].size() != m2.size()){
        std::cout<<"matrices cant be multiplied."<<std::endl;
        std::exit(EXIT_FAILURE);
   }
    
    std::vector<std::vector<double>> v(m1.size(), std::vector<double> (m2[0].size(), 0.0));

    for (int i = 0; i<v.size();i++){
        for (int j = 0;j<v[0].size(); j++){
            v[i][j] = Dproduct(MatRow(m1, i), MatCol(m2, j));
        }
    }
    return v;
}

int main(int argc, char* argv[]){
    // std::vector<std::vector<double>> m1 = {
    //     {1, 2, 3}, {4, 5, 6}
    // };
    // std::vector<std::vector<double>> m2 = {
    //      {1, 0}, {0, 1}, {1, 1}
    // };

    


    
    std::vector<std::vector<double>> m1 = FileToMat(argv[1]);
    std::vector<std::vector<double>> m2 = FileToMat(argv[2]);

    std::vector<std::vector<double>> m3 = MatProduct(m1, m2);

    for (int i = 0; i<m1.size();i++){
        std::cout<<std::endl;
        for (int j = 0; j < m2[0].size(); j++){
            std::cout<< m3[i][j]<<"\t";
        }
    }
}