#include "../include/datastructure.hpp"

int cppthing::access_vector() {
    std::vector<std::string> names = {"apple", "jackfruit"};

    for(int names_it = names.size(); names_it < 2; names_it++)
        std::cout << names[names_it];

    return 0;
}