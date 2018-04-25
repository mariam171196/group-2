#include <iostream>
#include "vector.h"

    Vector::Vector(unsigned int s) {
        size = 2* s;
        arr = new int [size];
        }
    Vector::Vector(const Vector &v) {
        size = v.size;
        this->arr = new int[size];
        for (unsigned int i = 0; i < size; i++) {
            arr[i] = v.arr[i];
        }
    }
    Vector::~Vector() {
        delete [] arr;
    }
        
    int& Vector::operator[](unsigned int index) {
        int a = -1;
    if (index > size) {
        std::cout << "Error!";
        return a;
    } 
        return arr[index];   
    }  
    int Vector::Resize(unsigned int num) {
    num = 2 * num;
    if (num < size) {
        for (unsigned int i = num; i < size; ++i) {
            arr[i] = 0;
        }
        return -1;
    } else if (num == size) {
        return 0;
    }
    
    int *array = new int[num];
    for (int i = 0; i < size; ++i) {
        array[i] = arr[i];
    }   
    delete [] arr;
    arr = array;
    size = num;
    return 0;
    }

    unsigned int Vector::Size() {
        return size;
    }
    void Vector::Insert (unsigned int index, double element) {
        for (unsigned int i = size - 1; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        if (index < size) {
            for (unsigned int i = size- 1; i > index; --i) {
                arr[i] = arr[i - 1];
            }
               arr[index] = element;
           } else {
               std::cout << "You have not element with such index!";
           }

     }

    int Vector::Find(double el) {
        for (unsigned int i = 0; i < size; i++) {
            if (arr[i] == el) {
                return i;
            }
        }
        std::cout << "There is no your value!";
        return -1;
    }

    void Vector::Remove (unsigned int index) {
        if (index < size) {
            for (unsigned int i = index; i < size - 1; ++i) {
                arr[i] = arr[i+1];
            }
            arr[size - 1] = 0;
        }
    }
    void Vector::Print() {
        for (unsigned int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
     } 
