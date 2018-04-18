#include <iostream>
#include "class.cpp"
using namespace std;

int main () {
    Circle a('A',5,6,10);
    cout << "Erkarutyun: " << a.getL() << ", " << "Makeres: "<< a.getS() << ", X: " << a.getX() << ", Y: " << a.getY() << ", Sharavix: " << a.getR() << "\n";
    a.setR(15);
    cout << "R poxeluc heto\n" << "Ekrarutyun: " << a.getL() << ", Makeres: " << a.getS() << ", X:  " << a.getX() << ", Y: " << a.getY() << ", Sharavix: " << a.getR() << "\n";
    return 0;
}

