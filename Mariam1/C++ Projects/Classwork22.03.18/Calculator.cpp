#include <iostream>
using namespace std;

int gumar (int num1, int num2) {
    return num1 + num2;
}
int hanum (int num1, int num2) {
    return num1 - num2;
}
int bajanum (int num1, int num2) {
    return num1 / num2;
}
int bazmapatkum (int num1, int num2) {
    return num1 * num2;
}
int modul (int num1, int num2) {
    return num1 % num2;
}
void error () {
    cout << "Error!!! \n";
}

int main () {
    int num1,num2;
    char func;

    cout << "Enter the first number: \n";
    cin >> num1;
    cout << "Enter the second number: \n";
    cin >> num2;
    cout << "Enter the action: \n";
    cin >> func;
     
    if (func == '+') {
      cout << gumar (num1, num2);
    } else if (func == '*') {
      cout <<  bazmapatkum (num1, num2);
    } else if (func == '/') {
      cout << bajanum (num1, num2);
    }else if (func == '%') {
      cout << modul (num1, num2);
    }else if (func == '-') {
      cout << hanum (num1, num2);
    } else {
        error();       
    }

    return 0;
}
