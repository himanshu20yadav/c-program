#include<stdio.h>
int main()
{
    int n,k=0,s=0;
    printf("Enter number",n);
    scanf("%d",&n);
    while(n!=0)
{

   k=n%10;
    s=s+k;
    n=n/10;}
    printf("sum of digits is:%d",s);
    
}