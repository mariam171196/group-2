#include <iostream>

int main() {
    int k;
    std::cout<< "Input array_size: ";
    std::cin>>k;
    int arr[k];  
    int max, min;
    int sum_even = 0;
    int sum_odd = 0;
     
    for (int i = 0; i < k; i++) {
        std::cout<< "Enter array_ellement at place " << i << ": ";
        std::cin>> arr[i];

        if (arr[i] % 2 == 0) {
            sum_even+= arr[i];
        }

        if (arr[i] % 2 == 1) {
            sum_odd+= arr[i];
        }
    }

    min = arr[0];
    for (int i = 1 ; i < k; i++) { 
        if (arr[i] < min) {
            min = arr[i];
        } 
    }

    max = arr[0];
    for (int i = 1; i < k; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout<< "Your array list is: {";
    for (int j =0; j < k - 1; j++) {
        std::cout<< arr[j] << ", ";
    }
    std::cout<< arr[k-1] << "}\n";
    std::cout<< "Summ of even numbers is: " << sum_even << std::endl;
    std::cout<< "Sum of odd numbers is: " << sum_odd << std::endl;
    std::cout<< "Max number is: " << max << std::endl;
    std::cout<< "Min number is: " << min << std::endl;    
    return 0;
}
