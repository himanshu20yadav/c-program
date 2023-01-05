#include<stdio.h>
int main()
{int x,y,r=1,i;
printf("Enter base:",x);
scanf("%d",&x);
printf("Enter power:",y);
scanf("%d",&y);
for(i=1;i<=y;i++)
{
    r=r*x;
}
printf("result is:%d",r);
}