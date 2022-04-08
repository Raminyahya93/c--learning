#include<iostream>

using namespace std;

long tedad(long long x);

int main()
{
   long long n;
   cout<<"Enter a number"<<endl;
   cin>>n;
   cout<< tedad(n)-1;
   return 0;
}

long tedad(long long x)
{
    int count=1;

    if(x==0)
    {
        return 1;
    }
    if(x!=0)
    {
        count+=tedad(x/10);
    }
    return count;
}

