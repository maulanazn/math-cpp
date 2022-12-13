#include "../include/geometry.hpp"

class Cube {
private:
    int c_x;
    int c_y;
    int c_z;
public:
    Cube(int x=0, int y=0, int z=0): c_x{x}, c_y{y}, c_z{z} {}
    
    friend std::ostream &operator<<(std::ostream &out, Cube &cb);
    friend std::istream &operator>>(std::istream &in, Cube &cb);
    friend Cube operator*(const Cube &width, const Cube &height);
    
    int getCubeVolume() {return {c_x * c_y * c_z};}
};

std::ostream &operator<<(std::ostream &out, Cube &cb) {
    out << cb.c_x << " " << cb.c_y << " " << cb.c_z << "\n";

    return out;
}

std::istream &operator>>(std::istream &in, Cube &cb) {
    in >> cb.c_x;
    in >> cb.c_y;
    in >> cb.c_z;

    return in;
}

Cube operator*(const Cube &width, const Cube &height) {
    return {width.c_x * width.c_y * width.c_z};
}

int cppthing::access_gm() {
    Cube cb;
    Cube cbtimes{2,3,4};

    std::cin >> cb;
    std::cout << cb << std::endl;

    std::cout << cbtimes.getCubeVolume() << std::endl;

    return 0;
}