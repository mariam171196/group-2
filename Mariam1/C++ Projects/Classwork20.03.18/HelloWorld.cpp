#include <iostream>
using namespace std;

int main(){
cout<<"int"<<sizeof(int)<<endl;
cout<<"char"<<sizeof(char)<<endl;
cout<<"float"<<sizeof(float)<<endl;
cout<<"bool"<<sizeof(bool)<<endl;
cout<<"double"<<sizeof(double)<<endl;
cout<<"long"<<sizeof(long)<<endl;
cout<<"short"<<sizeof(short)<<endl;

char m,a,r,i;
m=77;
a=65;
r=82;
i=73;

char e,d,g;
e=69;
d=68;
g=71;

cout<< m<<a<<r<<i<<a<<m<<endl;
cout<<e<<d<<g<<a<<r<<endl;


int A=5;
int B=7;
A=A+B;
B=A-B;
A=A-B;
cout <<A << B << endl;

float k,l,sum,minus,mult, div;
cout <<"Enter l"<<endl;
cin >> l;
cout <<"Enter k"<<endl;
cin >> k;

sum=k+l;
minus=k-l;
mult=k*l;
div= k/l;

cout <<"sum'll be "<< sum << "\n" <<  "minus'll be " << minus<< "\n"<<"mult'll be "  << mult<< "\n" << "div'll be " << div << endl;  


return 0;
}
