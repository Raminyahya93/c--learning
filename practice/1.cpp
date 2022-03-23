#include<iostream>
using namespace std;

int factoriall(int);
int  power(int , int);

int main ()
{
    int x , n ;
    double count = 0;
    cout << "meghdar moteghayere x ra vared konid"<<endl;
    cin >> x;
    cout << "tedad tekrar seri morde nazar ra vared konid"<<endl;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        count += (double)power(x, i)/factoriall(i);
    }
    cout <<"javab nahaii shoma ba tavjoh bemeghdar avaliyehye moteghayer ( "<< x << " ) , va ( " << n << " ) bar tekrar seri , barabar ba ( " << count << " ) mibashad"<< endl;
    return 0;
}

int factoriall(int number)
{
    int factoriall = 1;
    for(int i = number ; i > 1 ; i--)
    {
        factoriall *= i;
    }

    return factoriall;
}

 power(int base, int exponent)
{
    double result = 1;
    for(int i=0; i<exponent; i++)
    {
        result = result * base;
    }
    return result;
}