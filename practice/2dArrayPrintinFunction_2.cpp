#include<iostream>
using namespace std;

void print_function(int x[][3],int);

int main()
{
    printf("pls enter your numbers\n");
    int a[2][3];
    for (int i = 0; i <=1 ; i++)
    {
        for (int j = 0; j <=2 ; j++) 
        {
            cin >> a[i][j];
        }
    }
   print_function(a , 3);
    return 0;
}
void print_function(int x[][3] , int rows)
{
    printf(" your numbers are :\n");
    for (int i = 0; i < rows-1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}