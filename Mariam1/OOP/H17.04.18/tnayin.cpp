#include <iostream>
#include <cmath>

class Point {
    protected:
        float x;
        float y;
    public:
        Point (float x = 0, float y = 0)
            :x(x)
            ,y(y)
        {}
        Point(const Point &p) {
            x = p.x;
            y = p.y;
        }
        ~Point() {}
        void setX(float x) {
            this->x = x;
        }
        void setY(float y) {
            this->y = y;
        }
        float getX() {
            return x;
        }
        float getY() {
            return y;
        }
};

class Line : public Point {
    private:
        Point a;
    public:
        Line (Point a, Point b) : Point(b)
        {
            this->a = a;
        }
        ~Line() {}
        void setA (Point a) {
            this->a = a;
        }
        Point getA() {
            return a;
        }
        float getLine() {
            return  sqrt( pow(a.getX() - Point::getX(),2)+pow(a.getY() - Point::getY(),2) );
        }
        float  printLinesNumbers() {
            float k = (a.getY() - Point::getY()) / (a.getX()- Point::getX());
            float b = Point::getY() - Point::getX()*k;

            for (int i = Point::getX(); i <= a.getX(); ++i) {
                std::cout <<"x = "<<  i << ", y = " << k * i + b << std::endl;
            }
        }
};

class Triangle : public Point {
    private:
        Point a, b;
    public:
        Triangle (Point a, Point b, Point c)
            : Point(c)
        {
            this->a = a;
            this->b = b;
        }
        Triangle(const Triangle& t)
            :a(t.a)
            ,b(t.b)
        {}
        ~Triangle() {}
        void setA (Point a) {
            this->a = a;
        }
        void setB (Point b) {
            this->b = b;
        }
        Point getA() {
            return a;
        }
        Point getB() {
            return b;
        }
        float koxmA() {
            return sqrt(pow(Point::getX() - a.getX(), 2) + pow(Point::getY() - a.getY(), 2));
        }
        float koxmB() {
            return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));
        }
        float koxmC() {
             return sqrt(pow(b.getX() - Point::getX(), 2) + pow(b.getY() - b.getY(), 2));
        }
        float getL() {
            return koxmA() + koxmB() + koxmC();
        }
        float getS() {
            return sqrt( getL()/2 * ((getL()/2) - koxmA()) * ((getL()/2) - koxmB()) * ((getL()/2) - koxmC()) );
        }
};

class Rectangle : public Point {
    private:
        Point a;
    public:
        Rectangle (Point a, Point b)
            : Point(b)
        {
            this->a = a;
        }
        Rectangle(const Rectangle &r)
            :a(r.a)
        {}
        ~Rectangle() {}
        void setA(Point a) {
            this->a = a;
        }
        Point getA() {
            return a;
        }
        float printRectangle_S() {
            return (a.getX() - Point::getX()) * (a.getY() - Point::getY());
        }
        float printRectangle_L() {
            return 2 * ((a.getX() - Point::getX()) + (a.getY() - Point::getY()));
        }
};

