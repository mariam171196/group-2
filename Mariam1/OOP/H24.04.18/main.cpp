#include "vector.h"
#include <iostream>

int main () {
    Vector v(10);
        for (int i = 0; i < 5; ++i) {
            v[i] = i;
        }
     v.Print();
     std::cout << "Vector after insert: " << std::endl;
     v.Insert(7,10);
     v.Insert(9,11);
     v.Print();
     std::cout << "Vector after remove: " << std::endl;
     v.Remove(8);
     v.Print();
     std::cout << "Index of the 11: " << v.Find(11) << std::endl;
     v.Resize(15);
     std::cout << "Vector after resize: " << std::endl;
     v.Print();
     return 0;
}
