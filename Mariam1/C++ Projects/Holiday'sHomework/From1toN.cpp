#include <iostream>
using namespace std; 

int n;
int rec (int n) 
{
    if (n > 1)
        rec(n - 2);
        cout << n << " " ;
}
 
int main()
{
    cout << "Enter the number: ";
    cin >> n;
    if (n >= 1) {
    rec(n);
    } else { 
    cout << "Error!";
    }
    return 0;
}
