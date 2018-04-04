#include <iostream>
 
int main ()
{
    int height = 0;
        std::cout << "Greq tonacari bardzrutyuny: ";
	std::cin >> height;
 
	for (int i = 0; i < height; i++) {

	    for (int bacat = height -i; bacat <= height; bacat++) {
	        std::cout << " ";
	    }	
                       
            for (int ton = height; ton > i; ton--) {
                std::cout << "*";
            }
               
            std::cout << "\n";	

	}

	return 0;
}
