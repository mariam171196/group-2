#include <iostream>



char mec(char c){
    if (c > 96 && c < 123) {
       return (c-32);
   /*} else if(c == ' '){
       return c;*/
   }else if(c > 64 && c < 91){
       return (c+32);
   }    
}

int main () {
    
    char a[] = "                                     ";
    std::cin >> a;
    for (int i = 0; i < (sizeof(a)-1); i++){
        std::cout << mec(a[i]);
    }
    std::cout << "\n";
    return 0;
    }
