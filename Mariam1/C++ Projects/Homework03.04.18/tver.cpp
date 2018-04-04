#include <iostream>

int main () {

    int a, b;
    int sum = 0;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the last number: ";
    std::cin >> b;
    
    if (a > b) {
        std::cout<< "Please, enter the correct numbers: ";
    } else if (a < b) {
        for (int i = a; i <= b; i++) { 
            if (i % 2 == 1) {
                continue;
            }
          sum+= i;
        }
        std::cout << sum;
    } else {
        std::cout << "Error!";
    }
    
    return 0;
}
