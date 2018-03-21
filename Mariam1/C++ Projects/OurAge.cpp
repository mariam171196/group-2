#include <iostream>
#include <string>

int main(){

std::cout << "Hello!!!";

int age_of_user;
int age_of_pair;
std::string  user_name;
std::string  pair_name;

std::cout <<"What's your name?: \n";
std::cin>> user_name;
std::cout <<"How old are you?: \n";
std::cin>> age_of_user;

std::cout<<"Stop talking about you!\n";

std::cout <<"What's your pair's name?: \n";
std::cin>>pair_name;
std::cout <<"How old are your pair?: \n";
std::cin>>age_of_pair;

if (age_of_user > age_of_pair){
std::cout<< user_name << ">" << pair_name;
}
else if (age_of_pair>age_of_user){
std::cout<< pair_name << ">" << user_name;
}
else {
std::cout<< pair_name<< "=" <<user_name;
}

return 0;

}
