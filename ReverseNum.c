#include<stdio.h>
int main()
{
    int n,r=0,k=0;
    printf("Enter a number:",n);
    scanf("%d",&n);
    while(n!=0)
   {k=n%10;
    r=r*10+k;
    n=n/10;}
    printf("reverse of a number:%d",r);

}