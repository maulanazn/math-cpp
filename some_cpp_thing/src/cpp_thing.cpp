#include "../include/cpp_thing.hpp"

class Building{
public:
    int width_building;
    int height_building;
    friend std::string showarchitech(std::string architech);
private:
    friend class Office;
};

class Office: public Building {
public:
    int office_width;
    int office_height;
    friend std::string showarchitech(std::string architech);
};

union Vector3 {
    float x, y, z;
};

inline std::string showarchitech(std::string architech) {
    return architech;
}

int cppthing::classes() {
    Office *ofc, ofcptr;
    ofc = &ofcptr;
    
    int width_office = (ofc->office_width = 100);
    int width = (ofc->width_building = 100);
    std::cout << width << std::endl;

    Vector3 *vtx, vtx3;
    vtx = &vtx3;
    float x = (vtx->x = 10.0);
    float y = (vtx->y = 20.0);
    float z = (vtx->z = 50.0);

    std::cout << "building size on x axis is " << x  << std::endl << "building size on y axis is \n" << y << std::endl << "building size on z axis is \n" << z << std::endl;
    std::cout << "the architech is mr " << showarchitech("fatih") << std::endl;
    
    return 0;
}
