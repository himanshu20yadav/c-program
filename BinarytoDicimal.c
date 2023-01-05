#include<stdio.h>
int main()
{
    int bin,s=0,i=0;
    printf("Enter binary number:",bin);
    scanf("%d",&bin);
    while(bin)
    {
        s=s+pow(2,i)*(bin%10);
        bin=bin/10;
        i++;
        
    }
}
