#include "../include/thetemplate.hpp"

template <typename T>
void create(T value) {
    std::cout << value << std::endl;
}

template <class XY>
void access_coordinate(XY *x, XY *y) {
    XY *coord;
    coord = x;
    x = y;
    y = coord;
}

template <class XY, class XZ>
void access_coordinate(XY *x, XY *y, XZ *z) {
    XY *coord;
    XZ *coord_z;

    coord = y;
    x = y;
    y = coord;

    coord_z = z;
    x = z;
    z = coord_z;
}


int cppthing::thistemplate() {
    create("hello, this is template");
    create(101231.123);

    using coord_x = int;
    using coord_y = int;
    using coordd_x = double;
    using coordd_y = double;
    using coordd_z = double;

    coord_x x = 10; coord_y y = 20;
    coordd_x c_x = 10; coordd_y c_y = 20; coordd_z c_z = 10;

    access_coordinate(&x, &y);
    access_coordinate(&c_x, &c_y, &c_z);

    std::cout << "the coordinate " << x << " " << y << std::endl;
    std::cout << "the 3d coordinate " << c_x << " " << c_y << " " << c_z << std::endl;

    return 0;
}