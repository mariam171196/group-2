#include <iostream>
#include <string>

struct student {
    std::string firstname;
    std::string lastname;
    int age;
    std::string gender;
    bool status_student;
};
    
    void foo (student object) {
        std::cout<< "First name: " << object.firstname << std::endl;
        std::cout<< "Second name: " << object.lastname << std::endl; 
        std::cout<< "Age: " << object.age << std::endl;
        std::cout<< "Gender: " << object.gender << std::endl;
        std::cout<< "Status: student or not: " << object.status_student << std::endl;
    } 
 int main() { 
    student nona = {"Nona", "Musaelyan", 19, "female", true};
    student sasha = {"Sasha", "Avagyan", 19, "male", true};
    student mariam = {"Mariam", "Karapetyan", 21, "female", true};
    student edgar = {"Edgar", "Grigoryan", 16, "male", "false"};
    student nvard = {"Nvard", "Harutyunyan", 19, "female", true};
    student tigran = {"Tigran", "Hovhannisyan", 21, "male", true};
    student michael = {"Michael", "Michaelyan", 17, "male", true};
    student ani = {"Ani", "Hakobyan", 19, "female", true};
    student arthur = {"Arthur", "Gasparyan", 24, "male", false};
    student armen = {"Armen", "Abrahamyan", 24, "male", false};
    student arpine = {"Arpine", "Harutyunyan", 23, "female", false};
    student lilit = {"Lilit", "Melkumyan", 19, "female", true};
    student hrach = {"Hrach", "Gevorgyan", 21, "male", true};
    student smbat = {"Smbat", "Hayryan", 24, "male", false};
   
    std::cout<< "Good day! Now you are in the branch of *Instigate Mobile cjcs* in Stepanakert." << std::endl;
    std::cout<< "This is the list of all students: Michael, Smbat, Tigran, Nvard, Mariam, Edgar, Nona, Sasha, Lilit, Hrach, Arpine, Armen, Ani, Arthur. " << std::endl;   
    std::string name;
    std::cout<< "Enter name of student for more information: " << std::endl;
    std::cin >> name;
    
    student arr[14] = {nona, sasha, mariam, edgar, nvard, tigran, michael, ani, arthur, armen, arpine, lilit, hrach, smbat};
    bool nerka = false;
    for (int i = 0; i < 13; i++) {
    if (name == arr[i].firstname) {
         foo(arr[i]);
         nerka = true;
         break;
        } 
    }
    if (!nerka) {
        std::cout<< "We have not such student!";
    }
    
    std::cout<< "We love IM:D" << std::endl;
    return 0;
}
