#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("Enter  a string");
    gets(a);
    
    strrev(a);
    printf("%s",a);
}