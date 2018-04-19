#include <iostream>
#include "point.cpp"

int main() {

    Point p(1,5);   
    
    Point a(p);
    a.printPoint();

    Line  l(a.getx(), a.gety(), 5, 7);
    std::cout << "Point2 (" << l.getx1() << "," << l.gety1() << ");" << std::endl;
    std::cout << "Point1-ic Point2 mijakayqum gtnvum en hetevyal ketery!" << std::endl;
    
    l.printLinesNumbers();
    l.printLine();
   
    Triangle t(p.getx(), p.gety(), 4, 6, 7, 9);
    Triangle c(t);
    c.printTriangle_L();
    c.printTriangle_S();
 
    Rectangle r(p.getx(), p.gety(), 5, 7);
    Rectangle d(r);
    d.printRectangle_L();
    d.printRectangle_S();

return 0;
}














