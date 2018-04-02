#include <iostream>
using namespace std;
void parz() {
cout << "tivy parz e!";
}
void baxadryal() {
cout << "tivy baxadryal e!";    
}
unsigned int recursion (int n, int i=2) {
    if (n % i == 0) {
        parz();    
    } else if (i < n/2) {
        recursion (n, i+1);
    } else {
        baxadryal();      
    } 
}
   
int main() {
    unsigned int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n==0 || n==1) {
    baxadryal();    
    } else if (n==2){
    parz();    
    } else { 
    recursion (n); 
    }

    return 0;
}
