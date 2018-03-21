#include <iostream>
#include <string>

int main () {
    std::string name;
    int age;
    int a;
    std::cout << "What is yourn name?\n";
    std::cin >> name;
    std::cout << "Enter your age!\n";
    std::cin >> age;
    a = (name == "Mariam" && age == 21) ? 1 : 0;
    std::cout << a;
    return 0;
}
