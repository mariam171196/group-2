#include <iostream>
#include "tnayin.cpp"

int main() {
    float x1, y1, x2, y2, x3, y3;
    std::cout << "x1: ";
    std::cin >> x1;
    std::cout << "x2: ";
    std::cin >> y1;
    std::cout << "x2: ";
    std::cin >> x2;
    std::cout << "x2: ";
    std::cin >> y2;
    std::cout << "x3: ";
    std::cin >> x3;
    std::cout << "x3: ";
    std::cin >> y3;

    Point a(x1, y1);
    Point b(x2, y2);
    Point c(x3, y3);
 
    Line l(a, b);
    std::cout << "Hatvaci erkarutyuny: " << l.getLine() << std::endl;

    Triangle t(a, b, c);
    std::cout << "Erankyan paragicy: " << t.getL() << std::endl;
    std::cout << "Erankyan makeresy: " << t.getS() << std::endl;

    Rectangle r(a, b);
    std::cout << "Uxxankyan makeresy: " << r.printRectangle_S() << std::endl;
    std::cout << "Uxxankyan paragicy" << r.printRectangle_L() << std::endl;

return 0;
}

