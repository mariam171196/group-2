#include <iostream>
#include <string>
using namespace std;

int yes = 0;
int no = 0;

void func (string str) {
    string answer;
    cout << str;
    cin >> answer;
    
    if (answer == "yes") {
        yes++;
    } else if (answer == "no") {
        no++;
    } else {
        cout << "Error!\n";
    }

} 

int main(){
    string str;
    
    func("Do you like ice-cream?\n");
    func("Do you want to go to cinema?\n");
    func( "Have yot ever been in Italy?\n");
 
    cout << "YES: " << yes << "\n";
    cout << "NO: " << no << "\n";

    return 0;
}


