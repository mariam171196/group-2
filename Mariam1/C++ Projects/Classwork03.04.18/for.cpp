#include <iostream>

int main () {
    int n;
    int count = 0;
    int sum = 0;
    int last;

    do  {
        last = n;
        std::cout << "Enter the number: ";
        std::cin >> n;
        if (n%2 == 1) {
            continue; 
        }
        sum+=n;
        count++;
    } while (n != 0);
    
    std::cout << "The last number is " << last << "\n";
    std::cout << "The count of numbers is " << count-1 << "\n";
    std::cout << "The summ of numbers is " << sum << "\n";
    
    return 0;
}
