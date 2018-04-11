#include <iostream>
int &foo () {
    int a = 5;
    int &ra = a;

    std::cout << ra << "  " << a;
    
    }
int main() {
    
    &foo();
    
    
    return 0;
    }
