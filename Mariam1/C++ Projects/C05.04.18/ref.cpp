#include <iostream>

int main () {
    int a = 10;
    int &ra = a;
    ra = 11;
    std::cout << a << ra;
    std::cout << &a << "   " << &ra;
    return 0;
    }
