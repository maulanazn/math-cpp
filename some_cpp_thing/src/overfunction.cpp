#include "../include/overfunction.hpp"

class Operator {
public:
    int add(int i, int j);
    double add(double i, double j);

    int dim(int i, int j);
    double dim(double i, double j);
};

int Operator::add(int i, int j) {
    int result = i + j;

    return result;
}

double Operator::add(double i, double j) {
    double result = i + j;

    return result;
}

int Operator::dim(int i, int j) {
    int result = i - j;

    return result;
}

double Operator::dim(double i, double j) {
    double result = i - j;

    return result;
}

int cppthing::itsoverloading() {
    Operator *opt;
    opt = new Operator;

    std::cout << "the integer based adder operator is equal to " << opt->add(10, 10) << std::endl;
    std::cout << "the double based adder operator is equal to " << opt->add(20.2, 20.5) << std::endl;

    std::cout << "the integer based diminus operator is equal to " << opt->dim(5, 10) << std::endl;
    std::cout << "the double based diminus operator is equal to " << opt->dim(20.2, 20.5) << std::endl;

    delete opt;

    return 0;
}