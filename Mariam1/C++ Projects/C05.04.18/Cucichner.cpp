#include <iostream>
#include <string>

 int main() {
     int a = 8;
     int  *pa = &a;
     int b = 10;
     pa = &b;
     pa = &a;
     std::cout<< pa << std::endl;
     std::cout<< &a <<std::endl;
     std::cout <<*pa <<std::endl;

    std::string bar = "asadsa";
     std::string *p_bar = &bar;
     std::cout <<(void*) &bar << std::endl;
     std::cout <<(void*) p_bar << std::endl;
     std::cout << *p_bar << std::endl;


     return 0;
     }
