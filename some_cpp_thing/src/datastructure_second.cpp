#include "../include/datastructure.hpp"

int selection_sort() {
    int numbers[10]{2,1,4,8,5,6,7,5,9,10};
    int length{static_cast<int>(std::size(numbers))};

    for (int startIndex{0}; startIndex < length - 1; startIndex++) {
        int smallestIndex{startIndex};
        for (int currentIndex{startIndex + 1}; currentIndex < length; ++currentIndex) {
            if (numbers[currentIndex] < numbers[smallestIndex]) {
                smallestIndex = currentIndex;
            }
        }

        std::swap(numbers[startIndex], numbers[smallestIndex]);
    }
    
    for (int index{0}; index < length; ++index) {
        std::cout << numbers[index] << ' ';
    }

    return 0;
}


int cppthing::access_array() {
    selection_sort();

    std::array<int, 5> numbers{1,2,3,4,5};

    for (int i = 0; i < 5; i++)
        std::cout << numbers[i] << std::endl;

    return 0;
}