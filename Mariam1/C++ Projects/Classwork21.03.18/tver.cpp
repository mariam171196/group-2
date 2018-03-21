#include <iostream>

int main () {
    int n;
    std::cout << "Enter a number from 1 to 9999: \n";
    std::cin >> n;

    if (n >= 1 && n <= 9999) {
        switch(n / 1000) {
            case 2 : std::cout << "erku";
	            break;
	        case 3 : std::cout << "ereq";
	       		 break;
	   		case 4 : std::cout << "chors";
	             break;
	   		case 5 : std::cout << "hing";
	             break;
	   		case 6 : std::cout << "vec";
	             break;
    		case 7 : std::cout << "yot";
	             break;
	        case 8 : std::cout << "ut";
	             break;
	    	case 9 : std::cout << "inny";
	             break;
	     } 
	    if (n / 1000) {
              std::cout << " hazar ";
        }
        switch((n % 1000) / 100) {
            case 2 : std::cout << "erku";
                break;
            case 3 : std::cout << "ereq";
                break;
            case 4 : std::cout << "chors";
                break;
            case 5 : std::cout << "hing";
                break;
            case 6 : std::cout << "vec";
                break;
            case 7 : std::cout << "yot";
                break;
            case 8 : std::cout << "ut";
                break;
            case 9 : std::cout << "inny";
                break;
       }
       if ((n % 1000) / 100) {
           std::cout << " haryur ";
       }

       switch((n % 100) / 10) {
            case 1 : std::cout << "tasn";
    	         break;
            case 2 : std::cout << "qsan";
                break;
            case 3 : std::cout << "eresun";
                break;
            case 4 : std::cout << "qarasun";
                break;
            case 5 : std::cout << "hisun";
                break;
            case 6 : std::cout << "vatsun";
                break;
            case 7 : std::cout << "yotanasun";
                break;
            case 8 : std::cout << "utanasun";
                break;
            case 9 : std::cout << "innsun";
                break;
       }
       switch(n % 10) {
           case 1 : std::cout << "mek";
               break;
           case 2 : std::cout << "erku";
               break;
           case 3 : std::cout << "ereq";
               break;
           case 4 : std::cout << "chors";
               break;
           case 5 : std::cout << "hing";
               break;
           case 6 : std::cout << "vec";
               break;
           case 7 : std::cout << "yot";
               break;
           case 8 : std::cout << "ut";
               break;
           case 9 : std::cout << "inny";
               break;
       }
    } else {
          std::cout<<"Enter the correct number!";
    }
    return 0;
}