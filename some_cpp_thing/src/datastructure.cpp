#include "../include/datastructure.hpp"

enum COLOR {
    RED, 
    YELLOW, 
    BLUE,
};

enum SIZE {
    XXXL,
    XXL,
    XL,
    L,
    M,
    S,
};

struct MyShirt
{
    char size{};
    std::string name{};
};


void getMyShirt(MyShirt &ms) {
    std::cout << ms.size << std::endl;
    std::cout << ms.name << std::endl;
}

constexpr std::string_view getcolor(COLOR color) {
    switch(color) {
        case RED: return "apple";
        case YELLOW: return "banana";
        case BLUE: return "shirt";
        default: return "???";
    }
}

constexpr std::string_view getsize(SIZE size) {
    switch(size) {
        case XXXL: return "it's too largeeee!";
        case XXL: return "too large!";
        case XL: return "extra large!";
        case L: return "large!";
        case M: return "medium!";
        case S: return "small!";
        default: return "???";
    }
}

int cppthing::access_enum() {
    COLOR banana{YELLOW};
    SIZE sobig{XXL};

    // std::cout << getcolor(banana) << std::endl;
    // std::cout << getsize(sobig) << std::endl;

    MyShirt ms{'L', "maulana"};
    getMyShirt(ms);

    return 0;
}