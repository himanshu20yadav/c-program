#include<stdio.h>
int main()
{
    int i,n,k;
    printf("Enter number:",n);
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
         {
            n=n/i;
            printf("%d,",i);
         }
    
        
    }
}