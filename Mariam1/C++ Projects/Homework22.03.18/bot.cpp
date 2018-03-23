#include <iostream>
#include <string>
using namespace std; 

int main () { 
    
    string bar; 
    cout << "Privet!\n"; 
    cin >> bar; 

    if (bar != "privet") { 
        cout << "De ozumchs xosis, qina!"; 
    } else { 
        cout << "Huncs? Piti asis kam 'lavum' kam 'pisum' ver karim patasxanim:D\n"; 
    } 

    cin >> bar; 
    if (bar == "lavum") { 
        cout << "De lava ver lavs\n"; 
    } else if (bar == "pisum") { 
        cout << "Vechinch, mtacumer, loxa lyava innan!\n"; 
    } 

    cout << "Xravac sirums? ha kam che\n"; 
    cin >> bar; 
    if (bar == "ha") { 
        cout << "Eselum sirummm txe kya\n"; 
    } else if (bar == "che") { 
        cout << "Ym... asuma che...\n"; 
    }
    
    cout << "Pa sirac kirqt verna?\n"; 
    cin >> bar; 
    cout << "Haaa, imsel:D\n"; 

    cout << "Pa hinch kendaniys sirum? \n"; 
    cin >> bar; 
    if (bar == "katu") { 
        cout << "Voobshe sirumchum katunerin\n"; 
    } else if (bar == "shun") { 
        cout << "Eselum shon sirum, hatkapes buldog)) Tu sirums buldog?\n"; 
        cin >> bar; 
        if (bar == "che") { 
            cout << "Inqnel qez chi sirum!\n"; 
        } else { 
            cout << ":)))\n"; 
        } 
    } else { 
        cout << "Eseeeel!))\n"; 
    } 


    cout << "Qont tanuma?\n"; 
    cin >> bar; 
    if (bar == "ha") { 
        cout << "Ims aveli shat.. 3 jama mtacum qiznhet hinch xosim.Pari qsher!\n"; 
    } else { 
        cout << "Es qiznman hparap chum, pari qsher))\n"; 
    } 

    return 0; 
}
