#include<stdio.h>
int main()
{
    int s,i,n;
    printf("enter nummber:",n);
    scanf("%d",&n);
    for(s=0,i=1;i<=n;i++)
    {
       // s=s+2*i;  //for even natural numbers
       s=s+(2*i-1); //for odd natural number

    }printf("sum of n even natural number is:%d",s);
}