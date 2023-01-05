/*#include<stdio.h>
int main()
{
    int n,s=0,i;
    printf("enter number:",n);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
        printf(" sum is :%d",s);
    
}*/
//sum of prioduct of n natural number
#include<stdio.h>
int main()
{
    int i,s=1,n;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    s=s*i;

    }printf("product of n number is:%d",s);
    }