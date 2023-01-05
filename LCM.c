#include<stdio.h>
int main()
{
    int a,b,l;
    printf("Enter to number:",a,b);
    scanf("%d%d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l=l+(a>b?a:b))
       if(l%a==0&&l%b==0)
        break;
            
    printf("lcm is :%d",l);
    
}