#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[20];
    int l;
    printf("Enter your name:");
    gets(a);
   l=strlen(a);
   printf("Lenght of %s is %d",a,l);
   getch();
}