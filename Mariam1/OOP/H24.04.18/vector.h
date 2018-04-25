#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class Vector {
    private:
        unsigned int size;
        int *arr;
    public: 
        Vector (unsigned int = 10);
        Vector(const Vector &v);
        ~Vector();
        int& operator[ ] (unsigned int);
        int Resize(unsigned int);
        unsigned int Size();
        void Insert (unsigned int, double);
        int Find(double);
        void Remove (unsigned int);
        void Print();
   };
#endif
