#include <iostream>

int main () {
    int a, age;
    std::cout << "How old are you? \n";
    std::cin >> age;

    if (age < 10 || age > 60) {	
        std::cout << (a = 1);
    } else {
        std::cout << (a = 0); 
    }
    return 0;
}



