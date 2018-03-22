#include <iostream>

void Zuyg () {
    std::cout << "Dzer mtcrac tivy zug e!\n";
}
void Kent () {
    std::cout << "Dzer mtcrac tivy kent e!\n";
}
void Error () {
    std::cout << "Krkin porcir!\n";
}
void Zro () {
    std::cout << "Duq mtcrel eq 0!\n";
}

int main () {
    int a;
    std::cout << "Mtcreq tivy! \n";
    std::cin>> a;

    if (a == 0){
        Zro ();
    } else if (a % 2 == 1){
        Kent ();
    } else if (a % 2 == 0){
        Zuyg ();
    } else {
        if (a>10000)
        Error ();
    }      

    return 0;
}   
