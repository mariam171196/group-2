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
                       
            for (int ton = 0; ton < 2*height - 2*i -1; ton++) {
                std::cout << "*";
            }
               
            std::cout << "\n";	

	}

	return 0;
}
