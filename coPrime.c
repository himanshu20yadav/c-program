#include<stdio.h>
int main()
{
    int a,b,i,min;
    printf("Enter two number:",a,b);
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(i=2;i<=min;i++)
    {
    if(a%i==0&&b%i==0)
    break;}
    if(i==min+1)
    printf("nubers are co prime");
    else
    printf("number are not co prime");

}