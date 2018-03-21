#include <iostream>

int main () {
    int age;
    int a;
    std::cout << "Enter your age!\n";
    std::cin >> age;
    if (age > 20 && age < 30) {
        a = 1;
    } else {
        a = 0;
    }
    std::cout << a;

    return 0;
}
