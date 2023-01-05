#include<stdio.h>
int main()
{
    int a,b,k,i;
    printf("Enter two number:",a,b);
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b-1;i++)
      {
        for(k=2;k<=i;k++)
           if(i%k==0)
            break;
     if(k==i)
          printf("%d\n",i);

        
      }
}