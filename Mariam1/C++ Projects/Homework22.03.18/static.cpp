#include <iostream>

int foo() {
    static int n = 5;
    std::cout << n;
    n++;
}

int main() {
    foo();
    foo();
    foo();

return 0;
}
