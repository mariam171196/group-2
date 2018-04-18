#include <iostream>
#include "point.cpp"

int main() {

    Point p(1,5);
    p.printPoint();
    
    Line  l(p.getx(), p.gety(), 5, 7);
    std::cout << "Point2 (" << l.getx1() << "," << l.gety1() << ");" << std::endl;
    std::cout << "Point1-ic Point2 mijakayqum gtnvum en hetevyal ketery!" << std::endl;
    l.printLinesNumbers();
    l.printLine();
   
    Triangle t(p.getx(), p.gety(), 4, 6, 7, 9);
    t.printTriangle_L();
    t.printTriangle_S();
 
    Rectangle r(p.getx(), p.gety(), 5, 7);
    r.printRectangle_L();
    r.printRectangle_S();

return 0;
}
