#include <iostream>
#include <string>
void Hello () {
    std::cout << "Hello!\n";
}

void Bye () {
    std::cout << "Bye!\n";
}

int main () {

    std::string barev;
    for (int i = 0; i < 5; i++) {
        std::cin >> barev;
        if (barev == "barev"){
            Hello();
            return 0;
        }
    }
    Bye();  
    
    return 0;
}




