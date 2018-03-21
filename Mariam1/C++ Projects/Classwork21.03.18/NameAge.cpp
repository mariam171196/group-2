#include <iostream>
#include <string>

int main () {
    int a, age;
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (name == "Mariam" && age == 21) {
        a = 1;
    } else {
        a = 0;
    }
    std::cout << a;
    return 0;
}



