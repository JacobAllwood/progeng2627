#include <vector>
#include <iostream>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged)
{
    merged.clear();

    int i = 0, j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] <= v2[j]) {
            merged.push_back(v1[i]);
            i++;
        } else {
            merged.push_back(v2[j]);
            j++;
        }
    }

    while (i < v1.size()) {
        merged.push_back(v1[i]);
        i++;
    }
    while (j < v2.size()) {
        merged.push_back(v2[j]);
        j++;
    }
}

int main(){
    std::vector<int> v1 {1,3,5,7};
    std::vector<int> v2 {2,4,6,8};
    std::vector<int> m;

    merge_vectors_int(v1, v2,m );

    for (int i = 0; i <m.size();i++){
        std::cout<< m[i];
    }
}