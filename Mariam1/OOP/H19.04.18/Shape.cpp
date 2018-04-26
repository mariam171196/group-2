#include <iostream>

class Shape {
    public:
        virtual float getS() = 0;
        virtual float getP() = 0;
        virtual void foo() = 0;
        void boo();
};

class Point: public Shape {
	public:
		virtual float getS() {
			std::cout << "Point doesn't have S!" << std::endl;
                        return 0;	
		}       
		virtual float getP() {
			std::cout << "Point doesn't have P!" << std::endl;
                        return 0;
		}
		virtual void foo() {
			std::cout << "Virtual Point" << std::endl; 
		}
		void boo() {
			std::cout << "Point" << std::endl;
		}
};

class Line: public Shape {
	public:
		virtual float getS() {
			std::cout << "Line doesn't have S!" << std::endl;
                        return 0;
		}
		virtual float getP() {
			std::cout << "Line doesn't have P!" << std::endl;
                        return 0;
		}
		virtual void foo() {
			std::cout << "Virtual Line" << std::endl; 
		}
		void boo() {
			std::cout << "Line" << std::endl;
		}
};

class Triangle: public Shape {
	public:
		virtual float getS() {
			return 5;	
		}
		virtual float getP() {
			return 6;
		}
		virtual void foo() {
			std::cout << "Virtual Triangle" << std::endl; 
		}
		void boo() {
			std::cout << "Triangle" << std::endl;
		}
};

class Rectangle: public Shape {
	public:
		virtual float getS() {
			return 7;	
		}
		virtual float getP() {
			return 8;
		}
		virtual void foo() {
			std::cout << "Virtual Rectangle" << std::endl; 
		}
		void boo() {
			std::cout << "Rectangle" << std::endl;
		}
};

void printS(Shape* obj) {
        std::cout << "S will be: " << obj->getS() << std::endl;
    }
    void printP(Shape* obj) {
        std::cout << "P will be: " << obj->getP() << std::endl;
    }

int main() {
    
    Point p;
    Point *pp = &p;
    pp->foo();
    pp->boo();
    printS(&p);
    printP(&p);
    std::cout << std::endl;
    
    Line l;
    Line *ll = &l;
    ll->foo();
    ll->boo();
    printS(&l);
    printP(&l);
    std::cout << std::endl;
    
    Triangle t;
    Triangle *tt = &t;
    tt->foo();
    tt->boo();
    printS(&t);
    printP(&t);
    std::cout << std::endl;
    
    Rectangle r;
    Rectangle *rr = &r;
    rr->foo();
    rr->boo();
    printS(&r);
    printP(&r);
    std::cout << std::endl;
    
    return 0;
}

