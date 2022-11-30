#include "../include/cpp_thing.hpp"

// this whole thing called header guarding

int cppthing::processing() {
    std::cout << "sorting number provided by weirdwire\n";
    std::vector<int> a;
    
    while(std::cin) {
        std::cout << "input one number\n";
        int x = 0;
        std::cin >> x;
        if (!std::cin.fail()) {
            a.push_back(x);
        }
    }

    std::sort(a.begin(), a.end());
    int size_of_a = a.size();
    for (int i = 0; i < size_of_a; i++) {
        std::cout << a[i] << std::endl;
    }

    return 0;
}

void add (int a, int b, std::atomic<int> * result) {
    for (int i = a; i <= b; i++) {
        result->fetch_add(i);
    }
}

int cppthing::thread() {
    std::atomic<int> shared = 10;

    std::thread addingThread(add, 1, 10000, &shared);
    while (!addingThread.joinable()) {
        std::cout << shared.load() << std::endl;
    }

    addingThread.join();

    return 0;
}    

char cppthing::typecaster() {
    char character = ' ';
    int intfromchar = (int) character;

    int failedtocast = (intfromchar == character) ? intfromchar: 0;

    std::cout << failedtocast << std::endl;
    
    return character;
}

std::string cppthing::namechecking() {
    std::cout << "checking if you're employee\n";

    std::string name;   
    std::cin >> name;

    std::cout << "welcome " << name << std::endl;

    return name;
}

int cppthing::run_cpp() {
    // processing();
    // add();
    // typecaster();
    // thread();
    namechecking();

    return 0;
}

