#include<iostream>
using namespace std;

void print_function(int,int,int);

int main()
{
    printf("pls enter your numbers\n");
    int a[2][3];
    for (int i = 0; i <2 ; i++)
    {
        for (int j = 0; j <3 ; j++) 
        {
            scanf("%d\n", &a[i][j]);
        }
    }
    for (int i = 0; i < 2 ; i++)
    {
        for (int j = 0; j < 3 ; j++) 
        {
            print_function(a[i][j],i,j);
        }
    }
    return 0;
}
void print_function(int x, int y , int g)
{
    if(y == 0&& g== 0)printf("you stored numbers are : \n");
    printf("A[%d][%d] = %d\n", y, g,x);
}