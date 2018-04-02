#include <iostream>
using namespace	std;

unsigned int num (int n, int k)
{
    if (k == 0) {
        return 1; 
    } else {       
        return n * num(n, k-1);
    }
}

int main() {
    int n, k;
    cout << "Enter the number: "; 
    cin >> n;
    cout << "Enter the power: ";
    cin >> k;
    if (n >= 0 && k>=0) {
        cout  << n << "^" << k << "=" << num (n,k);
    } else {
        cout << "Error!";
    }

return 0;
}
