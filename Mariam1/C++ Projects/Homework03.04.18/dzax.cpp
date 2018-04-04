#include <iostream>
 
int main ()
{
    int height = 0;
        std::cout << "Greq tonacari bardzrutyuny: ";
	std::cin >> height;
 
	for (int i = 0; i < height; i++) {

	    for (int bacat = 0 ; bacat < height - i; bacat++) {
	        std::cout << " ";
	    }	
                       
            for (int ton = height - i; ton <= height; ton++) {
                std::cout << "*";
            }
               
            std::cout << "\n";	

	}

	return 0;
}
