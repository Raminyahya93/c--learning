#include<iostream>

using namespace std;

long tedad(int x);

int main()
{
   int n;
   cout<<"Enter a number"<<endl;
   cin>>n;
   cout <<tedad(n);
   return 0;
}

long tedad(int x)
{
    int count=0,c=0;
    int *g;
    g = &count;
    if(x==0)
    {
        return count;
    }
    if(x!=0)
    {
        c+=tedad(x/10);
        *g +=c%10;
    }
    return count;
}

