#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="c programing";
    char s2[]=" by learnvern";
    strcat(s1,s2);
    printf("\n\n concatenated string:%s \n\n",s1);
    return 0;
}