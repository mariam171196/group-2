#include <iostream>
 int myFoo(int a){
 a = 10;
std::cout << a;


}

int main() {

int a;
myFoo(a);
std::cout << a;

return 0;
}
