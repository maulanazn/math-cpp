#include "../include/geometry.hpp"

class Shape {
private:
    int width;
    int height;
public:
    Shape(int w): width{w} {}

    int setWidth(int w){width = w; return w;};
    int getWidth() {return width;};
    virtual std::string_view itsWhat() const {return "shape";};
};

class Rectangle: public Shape {
public:
    Rectangle(const int &width): Shape{width} {}

    virtual std::string_view itsWhat() const {return "rectangle";};
};

class Triangle: public Shape {
public:
    Triangle(const int &width): Shape{width} {}

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