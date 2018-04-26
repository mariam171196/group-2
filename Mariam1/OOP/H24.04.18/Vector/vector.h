#include <iostream>
#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    private:
        unsigned int _size;
        int *_arr;
    public: 
        Vector (unsigned int  = 10);
        Vector(const Vector &v);
        ~Vector();
        int& operator[] (unsigned int index);
        int Resize(unsigned int);
        unsigned int Size();
        void Insert (unsigned int, double);
        int Find(double);
        void Remove (unsigned int);
        void Print();
   };
#endif
