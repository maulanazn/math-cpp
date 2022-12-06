#include "../include/overcontruct.hpp"

class Date {
public:
    void set_date(int m, int y, int d);
    void show_date(); 
private:
    int month, year, day;
};

void Date::set_date(int m, int y, int d) {
    month = m;
    year = y;
    day = d;
}

void Date::show_date() {
    std::cout << day << " " << month << " " << year << std::endl;
}

int cppthing::access_date() {
    Date dt;

    dt.set_date(10, 10, 2010);
    dt.show_date();

    return 0;
}

class Time {
public:
    Time(int s);
    Time(int h, int m, int s);
    void show_second();
    void show_time();
private:
    int hour, minute, second;
};

Time::Time(int s) {
    second = s;
}

void Time::show_second() {
    std::cout << "now it's " << second << " second\n";
}

Time::Time(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

void Time::show_time() {
    std::cout << "What time is it? it's " << hour << ":" << minute << ":" << second << std::endl;
}

int cppthing::access_time() {
    Time t1(1, 20, 10);
    Time s1(10);

    t1.show_time();
    s1.show_second();

    return 0;
}