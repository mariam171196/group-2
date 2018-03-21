#include <iostream>

int main () {
    int a, age;
    std::cout << "How old are you? \n";
    std::cin >> age;

    a = (age < 10 || age > 60) ? 1 : 0;
    std::cout << a;

    return 0;
}








