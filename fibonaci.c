#include<stdio.h>
int main()
{
    int i,n,a=-1,b=1,c=0;
    printf("Enter number:",n);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {c=a+b;
    printf("%d ",c);
    a=b;
    b=c;}
    

}