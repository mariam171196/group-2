#include <iostream>
using namespace std;

unsigned int n;
unsigned int  fact_uneven(int n)
{   
    unsigned int answer;
    if (n == 1) {
         return 1;
    } else {
         answer = fact_uneven(n - 2) * n;
         return (answer);
    }
}

unsigned int  fact_even(int n)
{   
    unsigned int answer;
    if (n == 0) {
         return 1;
    } else {
         answer = fact_even(n - 2) * n;
         return (answer);
    }
}

int main () {
    cout << "Enter the number! \n";
    cin >> n;
    if (n % 2 == 1) {
        cout << n << "!!" << " = " << fact_uneven (n);
    } else if (n % 2 == 0) {
        cout << n << "!!" << " = " << fact_even (n);
    } else {
        cout << "Enter the correct number! \n";
    }
    return 0;
}
