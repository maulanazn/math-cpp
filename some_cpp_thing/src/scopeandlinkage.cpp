#include "../include/scopeandlinkage.hpp"

int g_a = 10;

int cppthing::global() {
    constexpr static int b = 7;
    cout << "global variable is " << g_a << endl;
    cout << "internal linkage variable is " << b << endl;

    return 0;
}

int cppthing::local() {
    int a = 5;
    
    cout << "local variabled is " << a << endl;

    return a;
}

int cppthing::external() {
    cout << "this is external linkage\n";

    return 0;
}

int cppthing::automaticduration() {
    int a = 10;
    ++a;
    cout << "automatic duration increases " << a << " times" << '\n';

    return 0;
}

int cppthing::staticduration() {
    static int s_a = 10;
    ++s_a;
    cout << "static duration increases " << s_a << " times" << '\n';

    return 0;
}

int cppthing::run_scope() {
    staticduration();

    return 0;
}