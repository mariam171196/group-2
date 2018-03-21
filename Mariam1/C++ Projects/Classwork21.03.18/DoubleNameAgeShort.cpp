#include <iostream>
#include <string>

int main () {
    std::string userName;
    std::string pairName;
    int userAge;
    int pairAge;
    int a;
    
    std::cout << "Enter user's name!\n";
    std::cin >> userName;
    std::cout << "Enter pair's name!\n";
    std::cin >> pairName;
    std::cout << "Enter user's age!\n";
    std::cin >> userAge;
    std::cout << "Enter pair's age!\n";
    std::cin >> pairAge;

    ((userName == "Mariam" && userAge == 21) || (pairName == "Edgar" && pairAge == 16 )) ? (a=1):(a=0);
    std::cout << a; 
    return 0;
}