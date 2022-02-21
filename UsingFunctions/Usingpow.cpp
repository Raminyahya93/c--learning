#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
int main ()
{
    int base, exponent;
    cout<<"What is the base"<<std::endl;
    cin>>base;
    cout<<"Whats the exponent"<<std::endl;
    cin>>exponent;
    long double power =pow(base, exponent);
    cout <<"it is = " <<power << std::endl;
    return 0;
}