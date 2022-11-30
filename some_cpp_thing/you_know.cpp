#include <iostream>
#include <stdlib.h>
#include <stdexcept>
#include <memory>

#include "include/cpp_thing.hpp"
#include "include/stl_cpp.hpp"
#include "include/scopeandlinkage.hpp"

#define stl
int call_stl() {
    cppthing::run_stl();

    return 0;
}

// #define sl
// int call_sl() {
//     cppthing::run_scope();

//     return 0;
// }

// #define cpp
// int call_cpp() {
//     cppthing::run_cpp();

//     return 0;
// }

int main(int argc, char const *argv[]) {
    try {
        #ifdef stl
            call_stl();
        #endif
        #ifdef cpp
           call_cpp();
        #endif
        #ifdef sl
            call_sl();
        #endif
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE; 
    }

    return EXIT_SUCCESS;
}
