#include <iostream>
#include <stdlib.h>
#include <stdexcept>

#include "include/run_all.hpp"

int main(int argc, char const *argv[]) {
    try {
        cppthing::run();
    	return EXIT_SUCCESS;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE; 
    } 
	
	return 0;
}
