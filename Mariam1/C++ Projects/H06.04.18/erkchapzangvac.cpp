#include <iostream>

int main() {
    int k;
    std::cout<< "Enter the number of rows and columns of array: ";
    std::cin >> k;
    std::cout<< "Enter array ellements: " << std::endl;; 
    int arr[k][k];
    int ankyunagic1 = 0;
    int ankyunagic2 = 0;
    int mek_plus_erku = 0;
    int ereq_plus_chors = 0;
    int mek_plus_chors = 0;
    int erku_plus_ereq = 0;
    int mek = 0;
    int erku = 0;
    int ereq = 0;
    int chors = 0;
    
    for (int i = 0; i < k; i++){
        for (int j = 0; j < k; j++){
            std::cin >> arr[i][j];
                
            if (i == j) {
                ankyunagic1+= arr[i][j];
            }
            if (i + j == (k - 1)) {
                ankyunagic2+= arr[i][j];
            }
            if (i < j) {
                mek_plus_erku+= arr[i][j];
            }
            if (i > j) {
                ereq_plus_chors+= arr[i][j];
            }
            if (i + j < k - 1) {
                mek_plus_chors+= arr[i][j];
            }
            if (i + j > k - 1) {
                erku_plus_ereq+= arr[i][j];
            }
            if((i < j) & (i + j < k-1)) {
                mek+= arr[i][j]; 
            } 
            if((i < j) & (i + j > k-1)) {
                erku+= arr[i][j];
            }
            if((i > j) & (i + j > k-1)) {
                ereq+= arr[i][j];
            }
            if((i > j) & (i + j < k-1)) {
                chors+= arr[i][j];
            }
        }
        
        std::cout<<std::endl;
    }

    std::cout<< "Your array list is: " << std::endl;
    for (int m = 0; m < k; m++){
        for(int n = 0; n < k; n++) {
        std::cout<< arr[m][n]<< " ";
        }
        std::cout<< std::endl;
    }
    
    std::cout<< "Massivy bajanenq hartutyunneri hetevyal kerp!" << std::endl;         
    std::cout<< " . 1 . " << std::endl;
    std::cout<< "  . .  " << std::endl;
    std::cout<< "4  .  2" << std::endl;
    std::cout<< "  . .  " << std::endl;
    std::cout<< " . 3 . " << std::endl;
   
    std::cout<< "Arajin ankyunagic :" << ankyunagic1 << std::endl;
    std::cout<< "Erkrord ankyunagic :" << ankyunagic2 << std::endl;
    std::cout<< "1 mas:" << mek << std::endl;
    std::cout<< "2 mas:" << erku << std::endl;
    std::cout<< "3 mas:" << ereq << std::endl;
    std::cout<< "4 mas:" << chors << std::endl;
    std::cout<< "1 + 2 = " << mek_plus_erku << std::endl;
    std::cout<< "3 + 4 = " << ereq_plus_chors << std::endl;
    std::cout<< "1 + 4 = " << mek_plus_chors << std::endl;
    std::cout<< "2 + 3 = " << erku_plus_ereq << std::endl;
   return 0;

}





                
