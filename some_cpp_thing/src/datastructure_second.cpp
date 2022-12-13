#include "../include/datastructure.hpp"

using Clock = std::chrono::steady_clock;
using Second = std::chrono::duration<double, std::ratio<1>>;
std::chrono::time_point<Clock> m_beg{Clock::now()};

void elapsed() {
    std::chrono::duration_cast<Second>(Clock::now() - m_beg).count();
}


int cppthing::access_array() {
    std::array<int, 5> numbers{1,2,3,4,5};
    std::array<int, 5> rand_num{2,1,6,4,3};


    for (int i = 0; i < 5; i++)
        std::cout << numbers[i] << std::endl;
    

    std::sort(rand_num.begin(), rand_num.end());

    std::cout << "time elapsed is " << elapsed << std::endl;

    for (int i = 0; i < 5; i++)
        std::cout << rand_num[i] << std::endl;

    return 0;
}