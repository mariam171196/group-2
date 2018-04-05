#include <iostream>

int foo(int &ra, int &rb, int &rc){
    ra+ = 5;
    rb+ = 10;
    rc+ = 15;
    return 0;
    }

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int &ra = a;
    int &rb = b;
    int &rc = c;
    foo(ra, rb, rc);

    std::cout << a << "  " << b << "  "  << c  << "  " << std::endl; 
    return 0;
    }
    
