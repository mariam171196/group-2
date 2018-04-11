#include <iostream>

/*void foo(int arr[3][3]){
    for (int i =0; i < 3; i++){
        for (int j=0; j < 3; j++) {
            std::cout<< arr[i][j] << " ";
            
            }
            std::cout<< "\n";
        }
        
    }
*/
int main() { 
  /*  int arr [3][3];

    for (int i=0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin>> arr[i][j];
        
        }
        }
        foo(arr); */

        char a[] = "anun";
  //      char b[5];
//        b[]= "anun";
     //   std::cout << &b[0];
        std::cout << &a << " " << &a[0] << " " << &a[1] << " " << &a[2] << " " << &a[3];
        if (a[4] == '\0') {
            std::cout <<"ha";

        }
        std::cout <<sizeof(a);
        return 0;
    }
