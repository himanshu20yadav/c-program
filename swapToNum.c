/*#include<stdio.h>
int main()
{
    int a,b,temp;
    a=10;
    b=20;
    printf("before swaping a is %d and b is %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swaping a is %d and b is %d",a,b);

}*/
#include<stdio.h>
int main()
{
    int a,b;
    a=10;
    b=20;
    printf("before swaping a is %d and b is %d",a,b);
    b=(a+b)-b;
    a=(a+b);
    printf("\nafter swap a is %d and b is %d",a,b);

}