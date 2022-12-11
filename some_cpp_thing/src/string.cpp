#include "../include/string.hpp"

int allocator() {
    std::string_view name{"maulana"};
    int *age = new int;
    *age = 100;
    std::string view_name{name};

    std::cout << "the very first address of " << *age << " is " << age << std::endl;
    std::cout << "the first address of " << *age << " is " << age+1 << std::endl;
    std::cout << "the second address of " << *age << " is " << age+2 << std::endl;

    int data;
    int *arr_data = new int[data];

    arr_data[0] = 1;
    arr_data[1] = 2;

    for (int i = 0; i < 2; i++) {
        std::cout << arr_data[i] << std::endl;
    }

    delete[] arr_data;
    delete age;

    return 0;
}

int cppthing::access_string() {
    int fibonacci[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21};

    for (int &fb: fibonacci) {
        std::cout << fb << std::endl;
    }

    int *ptr;
    int **ptr_to_ptr;

    std::cout << ptr << ptr_to_ptr;

    return 0;
}