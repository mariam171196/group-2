#include <iostream> 
#include <cstdlib> 

void a () { 
    std::cout << "Voch-voqi!\n"; 
} 
void b () { 
    std::cout << "Duq haxtel eq!\n"; 
} 
void c () { 
    std::cout << "Haxtel e hamakargichy!\n"; 
} 
void d () { 
    std::cout << "AYS XAXI HAXTOXY DUQ EQ!!!"; 
} 
void e () { 
    std::cout << "AYS XAXI HAXTOXY HAMAKARGICHN E!!!"; 
} 
void f () { 
    std::cout << "Haxtec Ynkerutyuny!!!"; 
} 
void g () {
    std::cout << "Error!";
}

int main () { 
    std::cout << "Voxjun! Xaxi kanonnern en: qar-1, mkrat-2, tuxt-3 \n";
    std::cout << "Duq uneq 3 hnaravorutyun! Hajohutyun!\n";  
    int sum1 = 0;
    int sum2 = 0;
    
    for (int i = 1; i <= 3; i++ ) {
        int arjeq1;
        int arjeq2 = 1 + rand() % 3;
        srand(time(0));

        std::cout << "Dzer qayly: \n"; 
        std::cin >> arjeq1; 
        std::cout << "Hamakargchi qayly: \n"; 
        std::cout << arjeq2 << std::endl; 
        
        if (arjeq1 == arjeq2) { 
            a (); 
        } else if (arjeq1 == 1 && arjeq2 == 2 || arjeq1 == 2 && arjeq2 == 3 || arjeq1 == 3 && arjeq2 == 1) { 
            b (); 
            sum1++; 
        } else if (arjeq1 == 2 && arjeq2 == 1 || arjeq1 == 3 && arjeq2 == 2 || arjeq1 == 1 && arjeq2 == 3) {
            c ();
            sum2++;
        } else { 
            g();
            sum1 = 666;
            break;
            
        } 
    }     
    if (sum1 == 666) {
        std::cout << "!!";
    }
     else if (sum1>sum2) { 
        d ();
    } 
     else if (sum1 < sum2) { 
        e (); 
    } 
      else if (sum1 == sum2) {
        f();
    }    

    return 0; 
}
