#include <iostream>
int *foo() {
    
    int *a = new int;
    *a = 10;

    return a;
    }
int main() {
    int *b = foo();
    delete b;
    std::cout<< *b;
    return 0;
    }

