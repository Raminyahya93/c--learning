#include<iostream>
#include<cmath>

using std::cout;
using std::cin;

double power(double , int);//declaration

int main ()
{
    int base, exponent;
    cout<<"What is the base"<<std::endl;
    cin>>base;
    cout<<"Whats the exponent"<<std::endl;
    cin>>exponent;
    long double mypower =power(base, exponent);
    cout <<"it is = " <<mypower << std::endl;
    return 0;
}
double power(double base, int exponent)//definition
{
    double result = 1;
    for(int i=0; i<exponent; i++)
    {
        result = result * base;
    }
    return result;
}