#include <iostream>
int main() {
    union U {
        int a;
        char b;
        };

     U u;
    
     u.b = 'a';
     u.a = 99;

     std::cout << u.a << "    " << u.b;
     std::cout << "\n" << &u.a << "\n" << &u.b;    
    return 0;
    }
