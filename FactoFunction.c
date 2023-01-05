#include<stdio.h>
int facto(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }return f;
}
int main()
{
    int n;
    printf("Enter a number:",n);
    scanf("%d",&n);
    printf("%d",facto(n));
}