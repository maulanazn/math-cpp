#include "../include/geometry.hpp"

class Shape {
private:
    int width;
    int height;
public:
    Shape(int w): width{w} {}
    Shape(int h): height{h} {}
    int setWidth(int w){width = w; return w;};
    int getWidth() {return width;};

    int setHeight(int h){height = h; return h;}
    int getHeight() {return height;}

    virtual std::string_view itsWhat() const {return "shape";};
};

class Rectangle: public Shape {
public:
    Rectangle(const int &width): Shape{width} {}
    Rectangle(const int &height): Shape{height} {}

    virtual std::string_view itsWhat() const {return "rectangle";};
};

class Triangle: public Shape {
public:
    Triangle(const int &width): Shape{width} {}
    Triangle(const int &height): Shape{height} {}

    virtual std::string_view itsWhat() const {return "triangle";};
};

void report(Shape &sp) {
    std::cout << sp.itsWhat() << std::endl;
}

int cppthing::access_shape() {
    Shape sp{0};
    Rectangle rc{0};
    Triangle tl{10};

    report(sp);
    report(rc);
    report(tl);

    return 0;
}
