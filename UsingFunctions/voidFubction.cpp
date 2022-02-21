#include<iostream>

using std::cout;
using std::cin;

double power(double base, int exponent)//definition
{
    double result = 1;
    for(int i=0; i<exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
    long double mypower =power(base, exponent);
    cout << "raised to the"<<exponent<<"power is"<<mypower<< std::endl;
}

int main()
{
    double base ;
    int exponent;
    cout<<"What is the base"<<std::endl;
    cin>>base;
    cout<<"Whats the exponent"<<std::endl;
    cin>>exponent;
    print_pow(base, exponent);
    print_pow(100, 4);
    print_pow(4, 2);
    return 0;
}