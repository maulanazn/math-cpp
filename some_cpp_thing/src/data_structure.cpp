#include <iostream>
#include <stdlib.h>
#include "../include/data_structure.hpp"

class Data {
public:
    Data() {i = 0;}
    Data(int j) {i = j;}
    int get_i() {return i;}
private:    
    int i;
};

class Somedata {
public:
    int data1;
};

int cppthing::access_data() {
    Data dt[3] = {1,2,3};
    
    Data *d;
    int i;

    d = dt;
    for (i = 0; i < 3; i++) {
        std::cout << d->get_i() << std::endl;
        d++;
    }

    return 0;
}

std::string whoistalkbesideme(std::string *name) {
    return *name;
}

int cppthing::access_member() {
    int Somedata::*d1;
    d1 = &Somedata::data1;
    // std::cout << d1 << std::endl;

    int *somedata;
    somedata = new int;
    // std::cout << *somedata << std::endl;
    delete somedata;

    int *somearray;
    somearray = new int [20];
    for (int i = 0; i < 20; i++) {
        std::cout << somearray[i] << std::endl;
    }
    delete []somearray;

    std::string onestepbeside = "dwi";
    // std::cout << "he is " << whoistalkbesideme(&onestepbeside);

    return 0;
}