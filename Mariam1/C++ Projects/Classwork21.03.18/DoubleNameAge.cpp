#include <iostream>
#include <string>

int main () {
    std::string userName;
    std::string pairName;
    int userAge;
    int pairAge;
    int a;
   
    std::cout << "Enter user's name!\n";
    std::cin >> (userName);
    std::cout << "Enter pair's name!\n";
    std::cin >> (pairName);
    std::cout << "Enter user's age!\n";
    std::cin >> userAge;
    std::cout << "Enter pair's age!\n";
    std::cin >> pairAge;

    if ((userName == "Mariam" && userAge == 21) || (pairName == "Edgar" && pairAge == 16 )) {
        std::cout << (a = 1);
    } else {
        std::cout << (a = 0);
    }
    return 0;
}
