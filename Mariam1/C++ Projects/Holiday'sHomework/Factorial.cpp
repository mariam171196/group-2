#include <iostream>
using namespace std;

unsigned int n;
unsigned int  fact (int n)
{
    unsigned int answer;
    if (n==1) {
         return(1);
    } else {
         answer = fact(n - 1) * n;
         return(answer);
    }
}

int main () {
    cout << "Enter the number! \n";
    cin >> n;
    if (n > 0) {   
        cout << n << "!" << " = " << fact (n);
    } else {
        cout << "Enter the correct number! \n";
    }
 
    return 0;
}



