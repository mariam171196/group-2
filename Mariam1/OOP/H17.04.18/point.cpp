#include <iostream>
#include <cmath>

class Point {
    private:
        float x;
        float y;
    public:
        Point (float x, float y) 
            :x(x)
            ,y(y)
        {}
        Point(const Point &p) {
            x = p.x;
            y = p.y;
            std::cout<< "Copy Point Constructor" << std::endl;
        }
        ~Point() {}
       

        void setx(float x) {
            this->x = x;
        }
        void sety(float y) {
            this->y = y;
        }
        float getx() {
            return x;
        }
        float gety() {
            return y;
        }
        void printPoint() {
            std::cout << "Point1 (" << x << ',' << y << ");" << std::endl;
        }
};

class Line : public Point {
    private:
        float x1, y1;
    public:
        Line (float x, float y, float x1, float y1) 
            :Point(x,y)
            , x1(x1)
            , y1(y1)
        {}
        Line (const Line &l): Point (l) {
            x1 = l.x1;
            y1 = l.y1;
            std::cout << "Copy Line constructor" << std::endl;
        }        

        ~Line() {}

        void setx1(float x1) {
            this->x1 = x1;
        }
        void sety1(float y1) {
            this->y1 = y1;
        }
        float getx1() {
            return x1;
        }
        float gety1() {
            return y1;
        }
        float getLine() {
            return  sqrt( pow(getx()-getx1(),2)+pow(gety()-gety1(),2) );
        }
        void printLine() {
            std::cout << "Hatvaci chapsy: " << getLine() << std::endl;
         }
        void printLinesNumbers() {
            float k = gety() / getx();
            float b = gety() - k * getx();
            
            for (int i = getx(); i <= getx1(); ++i) {
                std::cout <<"x = "<<  i << ", y = " << k * i + b << std::endl;
            }            
        }
};
 
class Triangle : public Point {
     private:
        float  x1, y1, x2, y2;
     public:
        Triangle (float x, float y, float x1, float y1, float x2, float y2)
            :Point(x,y)
            , x1(x1)
            , y1(y1)
            , x2(x2)
            , y2(y2)
        {}
        Triangle (const Triangle &t) : Point(t) {
            x1 = t.x1;
            y1 = t.y1;
            x2 = t.x2;
            y2 = t.y2;
            std::cout << "Copy Triangle Constructro" << std::endl;
        }
        ~Triangle() {}
        void setx1(float x1) {
            this->x1 = x1;
        }
        void sety1(float y1) {
            this->y1 = y1;
        }
        float getx1() {
            return x1;
        }
        float gety1() {
            return y1;
        }
        void setx2(float x2) {
            this->x2 = x2;
        }
        void sety2(float y2) {
            this->y2 = y2;
        }
        float getx2() {
            return x2;
        }
        float gety2() {
            return y2;
        }
        float getl() {
            return sqrt(pow(getx()-getx1(),2)+pow(gety()-gety1(),2))+ sqrt(pow(getx1()-getx2(),2)+pow(gety1()-gety2(),2))+ sqrt(pow(getx2()-getx(),2)+pow(gety2()-gety(),2));
        }
        void printTriangle_L() {
            std::cout << "Erankyan paragicy: " << getl() <<std::endl;
        } 
        void printTriangle_S() {
            std::cout << "Erankyan makeresy: " << sqrt( getl()/2 * (getl()/2-sqrt(pow(getx()-getx1(),2)+pow(gety()-gety1(),2))) * (getl()/2-sqrt(pow(getx1()-getx2(),2)+pow(gety1()-gety2(),2))) * (getl()/2-sqrt(pow(getx2()-getx(),2)+pow(gety2()-gety(),2))) ) << std::endl;
        }
};

class Rectangle : public Point {
    private:
        float x3, y3;
        
    public:
        Rectangle (float x, float y, float x3, float y3)
            :Point(x,y)
            , x3(x3)
            , y3(y3)
        {}
        Rectangle (const Rectangle &r) : Point(r) {
            x3 = r.x3;
            y3 = r.y3;
            std::cout << "Copy Rectangle Constructor" << std::endl;
        }        
        ~Rectangle() {}

         void setx3(float x3) {
            this->x3 = x3;
        }
        void sety3(float y3) {
            this->y3 = y3;
        }
        float getx3() {
            return x3;
        }
        float gety3() {
            return y3;
        }
        void printRectangle_L() {
            std::cout << "Uxxankyan makeresy:" << ((getx()-getx3())* (gety()-gety3()) )<< std::endl;
        }
        void printRectangle_S() {
            std::cout << "Uxxankyan paragicy: " << ((getx3()-getx())*2 + (gety3()-gety())*2 )<< std::endl;
        }
};
