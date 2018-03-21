#include <iostream>

int main () {
    int age;
    int a;
    std::cout << "Enter your age!\n";
    std::cin >> age;
    a = (age > 20 && age < 30) ? 1 : 0;
    std::cout << a;
    return 0;
}
