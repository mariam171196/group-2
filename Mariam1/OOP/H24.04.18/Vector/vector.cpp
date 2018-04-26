#include <iostream>
#include "vector.h"

    Vector::Vector(unsigned int s) {
        _size = 2 * s;
        _arr = new int [_size];
        }
    Vector::Vector(const Vector &v) {
        _size = v._size;
        this->_arr = new int[_size];
        for (unsigned int i = 0; i < _size; i++) {
            _arr[i] = v._arr[i];
        }
    }
    Vector::~Vector() {
        delete [] _arr;
    }
        
    int& Vector::operator[] (unsigned int index) {
        int a = -1;
    if (index > _size) {
        std::cout << "Error!";
        return a;
    } else {
        return _arr[index];   
      }
    }
    int Vector::Resize(unsigned int num) {
    num = 2 * num;
    if (num < _size) {
        for (unsigned int i = num; i < _size; ++i) {
            _arr[i] = 0;
        }
        return -1;
    } else if (num == _size) {
        return 0;
    }
    
    int *array = new int[num];
    for (int i = 0; i < _size; ++i) {
        array[i] = _arr[i];
    }   
    delete [] _arr;
    _arr = array;
    _size = num;
    return 0;
    }

    unsigned int Vector::Size() {
        return _size;
    }
    void Vector::Insert (unsigned int index, double element) {
        if (index < _size) {
            for (unsigned int i = _size- 1; i > index; --i) {
                _arr[i] = _arr[i - 1];
            }
               _arr[index] = element;
           } else {
                std::cout << "You have not element with such index!";
           }
     }
    int Vector::Find(double el) {
        for (unsigned int i = 0; i < _size; ++i) {
            if (_arr[i] == el) {
                return i;
            }
        }
        std::cout << "There is no your value!";
        return -1;
    }

    void Vector::Remove (unsigned int index) {
        if (index < _size) {
            for (unsigned int i = index; i < _size - 1; ++i) {
                _arr[i] = _arr[i+1];
            }
            _arr[_size - 1] = 0;
        }
    }
    void Vector::Print() {
        for (int i = 0; i < _size; ++i) {
            std::cout << _arr[i] << " ";
        }
        std::cout << std::endl;
     } 
