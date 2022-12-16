#include "../include/geometry.hpp"

class Cube;

class Geometry {
private:
    std::vector<std::reference_wrapper<const Cube>> m_cube{};
    int cube_size{};
public:
    Geometry(int &c_size): cube_size{c_size} {}
    void addCube(Cube &cube);
    
    friend std::ostream& operator<<(std::ostream& out, Geometry &gm);

    const int &getCube() const {return cube_size;}
};

class Cube {
private:
    int cube_size{};
    std::vector<std::reference_wrapper<const Geometry>> m_geometry{};
    void addGeometry(const Geometry &gm) {
        m_geometry.push_back(gm);
    }   
public:
    Cube(int &c_size): cube_size{c_size} {}
    friend std::ostream& operator<<(std::ostream& out, Cube &cube);

    const int getCube() const {return cube_size;}
    friend void Geometry::addCube(Cube &cube);
};

void Geometry::addCube(Cube &cube) {
    m_cube.push_back(cube);
    cube.addGeometry(*this);
}

std::ostream& operator<<(std::ostream& out, Geometry &gm) {
    if (gm.m_cube.empty()) {
        out << gm.cube_size << " has no size now\n";
        return out;
    }

    out << gm.cube_size << " is available\n";

    for (auto const &cube: gm.m_cube) {
        out << gm.getCube() << " ";
    }

    return out;
}

std::ostream& operator<<(std::ostream& out, Cube &cube) {
    if (cube.m_geometry.empty()) {
        out << cube.cube_size << " has no size now\n";
        return out;
    }

    out << cube.cube_size << " is available\n";
    for (auto const &gm: cube.m_geometry) {
        out << cube.getCube() << " ";
    }

    return out;
}

int cppthing::access_gm() { 
    int cube = 100;

    Cube cb1{cube};
    Cube cb2{cube};
    Cube cb3{cube};

    Geometry gm1{cube};
    
    gm1.addCube(cb1);
    gm1.addCube(cb2);
    gm1.addCube(cb1);


    std::cout << cb1 << std::endl;
    std::cout << cb2 << std::endl;
    std::cout << cb3 << std::endl;


    return 0;
}