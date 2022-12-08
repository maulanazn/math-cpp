#include "../include/openingoperator.hpp"

class Loc {
private:
    long int longitude, latitude;
public:
    Loc() {}
    Loc(int lg, int lt) {
        longitude = lg;
        latitude = lt;
    }

    void show() {
        std::cout << longitude << std::endl;
        std::cout << latitude << std::endl;
    }

    //overload operator of class
    Loc operator+(Loc op1);
    Loc operator-(Loc op1);
    Loc operator*(Loc op1);
    Loc operator/(Loc op1);
    Loc operator%(Loc op1);

    void *operator new(size_t size);
    void operator delete(void *dl1);
};

Loc Loc::operator+(Loc op1) {
    Loc temp;

    temp.longitude = op1.longitude + op1.latitude;
    temp.latitude = op1.latitude + op1.longitude;

    return temp;
}


Loc Loc::operator-(Loc op1) {
    Loc temp;

    temp.longitude = op1.longitude - op1.latitude;
    temp.latitude = op1.latitude - op1.longitude;

    return temp;
}

Loc Loc::operator*(Loc op1) {
    Loc temp;

    temp.longitude = op1.longitude * op1.latitude;
    temp.latitude = op1.latitude * op1.longitude;

    return temp;
}

Loc Loc::operator/(Loc op1) {
    Loc temp;

    temp.longitude = op1.longitude / op1.latitude;
    temp.latitude = op1.latitude / op1.longitude;

    return temp;
}

Loc Loc::operator%(Loc op1) {
    Loc temp;

    temp.longitude = op1.longitude % op1.latitude;
    temp.latitude = op1.latitude % op1.longitude;

    return temp;
}

void *Loc::operator new(size_t size) {
    void *p;
    std::cout << "in overloader new!\n";
    p = malloc(size);
    return p;
}

void Loc::operator delete(void *p) {
    std::cout << "in overloader delete!\n";
    free(p);
}

int cppthing::openingoperator() {
    Loc *op1, *op2;
    op1 = new Loc(1231.22, 10232.22);
    op2 = new Loc(123101.22, 232221.233);

    op1->show();
    op2->show();

    delete op1;
    delete op2;

    return 0;
}