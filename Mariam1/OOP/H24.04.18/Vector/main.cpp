#include "vector.h"
#include <iostream>

int main () {
     Vector v;
     for (int i = 0; i < 10; ++i) {
        v[i] = i;
     }
     std::cout << "Your vector is: " << std::endl;
     v.Print();
     std::cout << "Vector after insert: " << std::endl;
     v.Insert(7,10);
     v.Insert(9,11);
     v.Print();
     std::cout << "Vector after remove: " << std::endl;
     v.Remove(9);
     v.Print();
     std::cout << "Index of the 4: " << v.Find(4) << std::endl;
     v.Resize(15);
     std::cout << "Vector after resize: " << std::endl;
     v.Print();
     std::cout << v[3] << std::endl;
     return 0;
}
