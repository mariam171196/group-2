#include <iostream>
using namespace std;

unsigned int n;
unsigned int func (int n) {
    if (n ==0) {
        return 1;
    } else {
        cout << (n % 10);
        func (n / 10);
    } 
}

int main ()
{
    cout << "Enter the number: ";
    cin >> n;
    if (n >0 && n <= 99999) {
        func (n); 
    } else {
        cout << "Enter the correct number!";
    }
    return 0;
}

