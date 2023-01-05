//ex of armstrong number is 153= 1^3+5^3+3^3=153.
#include<stdio.h>
int main()
{
    int n,s,r,x;
    for(n=1,r=0,s=0;n<=1000;n++)
    { x=n;
         while(x!=0)
    {
        r=x%10;
        s=s+r*r*r;
         x=x/10;}
         if(n==s)
         printf("%d",n);
    

    }
}