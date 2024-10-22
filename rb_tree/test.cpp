#include "trees/rb.hpp"
#include <string>
#include <fstream>
#include <iostream>

int* readKeysFromFile(std::string filename, int* n_keys){
    std::ifstream  fin(filename, std::ios::binary); 
    char* val = new char[4];
    int n = 0;
    fin.read(val, 4);
    while (!fin.eof()){
        n = n + 1;        
        fin.read(val, 4);
    }
    fin.close();
    fin.open(filename, std::ios::binary); 
    int* keys = new int[n];
    for(int i=0; i < n; i++){
        fin.read(val, 4);
        keys[i] = *reinterpret_cast<int*>(val);
    }
    fin.close();
    *n_keys = n;
    delete[] val;
    return keys;
}

int main(int nargs, char** vargs){
    int n_data = 0;
    int* data = readKeysFromFile("keys_sorted.bin", &n_data);
    trees::RB rbtree;
    for(int i=0; i<n_data;i++){
        std::cout<< "inserting " << data[i] << std::endl;
        rbtree.insert(data[i]);
    } 
    rbtree.traverse();

    return 0;
}