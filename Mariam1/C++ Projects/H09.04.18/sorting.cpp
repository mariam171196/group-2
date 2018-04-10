#include <iostream>

int main() {
    int k;
    int number;
    std::cout<< "Enter array_size: ";
    std::cin>> k;
    int arr[k];
    for (int i = 0; i < k; i++) {
        std::cin>> arr[i];
    }
    
    std::cout << "Enter the number for searching in array: ";
    std::cin >> number;

    for (int i = 0; i < k; i++) {
        if (number == arr[i]) {
        std::cout << "Index of your number is: " << i << std::endl;
        }
    }

return 0;
}
