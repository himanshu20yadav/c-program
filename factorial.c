#include<stdio.h>
int main()
{
    int n,facto=1;
    printf("enter a number:",n);
    scanf("%d",&n);
    while(n>=1)
    {
        facto=facto*n;
        n--;
    }
 printf("factorial of a number is:%d",facto);
}