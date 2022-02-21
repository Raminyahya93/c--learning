#include<iostream>
#include<float.h>
using std::cout;

int main()
{
    float a = 10.0 /3;
    a = a * 100000000000;
    double b=10.0 /3;
    b = b * 100000000000;
    long double c = 10.0 /3;
    c = c * 100000000000;
    cout<<std::fixed << c << std::endl;
    //cout << FLT_DIG<<std::endl;
    //cout <<DBL_DIG<<std::endl;
    cout << LDBL_DIG<<std::endl;
    return 0;
}