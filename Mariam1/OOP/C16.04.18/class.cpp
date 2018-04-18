#include <iostream>
#include <cmath>

class Circle {
private:
    float x,y;
    unsigned int r;
    char name;
public:
    Circle (char name, float x = 0, float y = 0, unsigned int r = 0) {
        (*this).name = name;
        (*this).x = x;
        (*this).y =y;
        (*this).r =r;
        std::cout << "Hello " << name << "\n";
    }
    ~Circle () {
        std::cout << "Bye " << name << "\n";
    }
    float getX () {
        return x;
    }
    float getY () {
        return y;
    }
    unsigned int getR () {
        return r;
    }
    float getL () {
        return (2*M_PI*r); //Math
    }
    float getS () {
        return M_PI*r*r;
    }
    void setR (unsigned int r) {
        (*this).r = r;
    }
    void setX () {
        (*this).x = x;
    }
    void setY () {
        (*this).y = y;
    }
    Circle operator*()
};
