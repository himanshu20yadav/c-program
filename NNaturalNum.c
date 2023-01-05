/*#include<stdio.h>
int main()
{int n,i;
printf("enter the number:",n);
scanf("%d",&n);
i=1;
while(i<=n)
{printf("%d\n",i);
i++;
}
}*/
//in reverse order
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter number:",n);
    scanf("%d",&n);
while(n>=i)
   { printf("%d\n",n);
    n--;}
}