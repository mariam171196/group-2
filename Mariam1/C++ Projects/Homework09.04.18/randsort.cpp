#include <iostream>
#include <cstdlib>

int main() {
     int k;
     int number;
     std::cout<< "Enter array_size: ";
     std::cin>> k;
     int arr[k];
     srand(time(0));
        
     for (int i = 0; i < k; i++) {
         arr[i] = 1 + rand() % 100;
         std::cout<< arr[i] << " ";
     }
     for (int i = 0; i < k-1; i++ ) {
         for (int j = 0; j < k-1; j++) {
             if (arr[j] > arr[j + 1]) {
                 int a = arr[j];
                 arr[j] = arr[j + 1];
                 arr[j + 1] = a;
             }
         }
     } 

    std::cout<< std::endl << "SORT_ARRAY_LIST" <<std::endl; 
    for (int i = 0; i < k; i++) {
        std::cout<< arr[i] << " ";
    }
    std::cout<< std::endl;
    std::cout << "Enter the number for searching in array: ";
    std::cin >> number;
   
    for (int i = 0; i < k; i++) {
        if (number == arr[i]) {
        std::cout << "Index of your number is: " << i << std::endl;
        } 
    } 
    return 0;
}

