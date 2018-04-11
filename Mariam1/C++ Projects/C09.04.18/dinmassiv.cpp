#include <iostream>

int main() {
    int *arr = new int [5];
    arr[0] = 3;
    arr[1] = 4;
    arr[2] = 5;
    arr[3] = 6;
    arr[4] = 7;

   delete arr[1];
    delete[] arr;
    std::cout<< arr[0] << arr[1] << arr[2] << arr[3] << arr[4];

    return 0;
    }
