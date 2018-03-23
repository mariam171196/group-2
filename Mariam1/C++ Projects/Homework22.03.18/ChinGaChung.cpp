#include <iostream> 
#include <string> 
using namespace std; 

void a (int arjeq1, int arjeq2) { 
    cout << "Voch-voqi!\n"; 
} 
void b (int arjeq1, int arjeq2) { 
    cout << "Haxtel e arajin xaxacoxy!\n"; 
} 
void c (int arjeq1, int arjeq2) { 
    cout << "Haxtel e erkrord xaxacoxy!\n"; 
} 
void d (int sum1, int sum2) { 
    cout << "Xaxi haxtoxn e 1 xaxacoxy!"; 
} 
void e (int sum1, int sum2) { 
    cout << "Xaxi haxtoxn e 2 xaxacoxy!"; 
} 
void f (int sum1, int sum2) { 
    cout << "Haxtec Ynkerutyuny!!!"; 
} 

int main () { 
    cout << "Voxjun! Xaxi kanonnern en: qar-1, mkrat-2, tuxt-3 \n"; 
    int arjeq1, arjeq2, sum1, sum2; 
    sum1=0; 
    sum2=0; 

    for (int i = 1; i <= 3; i++ ) { 
        cout << "Arajin xaxacoxi qayly: \n"; 
        cin >> arjeq1; 
        cout << "Erkrord xaxacoxi qayly: \n"; 
        cin >> arjeq2; 

        if (arjeq1 == arjeq2) { 
            a (arjeq1, arjeq2); 
        } else if (arjeq1 == 1 && arjeq2 == 2 || arjeq1 == 2 && arjeq2 == 3 || arjeq1 == 3 && arjeq2 == 1) { 
            b (arjeq1, arjeq2); 
            sum1++; 
        } else { 
            c (arjeq1, arjeq2); 
            sum2++; 
        } 

    } 

    if (sum1>sum2) { 
        d (sum1, sum2); 
    } else if (sum1 < sum2) { 
        e (sum1, sum2); 
    } else {    
        f (sum1,sum2); 
    } 

    return 0; 
}
