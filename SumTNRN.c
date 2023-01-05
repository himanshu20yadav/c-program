#include<stdio.h>
void sum(){
    int a,b,c;
    printf("Enter to number:",a,b);
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
}
main()
{
    sum();
    getch();
}