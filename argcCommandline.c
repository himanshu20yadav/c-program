
#include<stdio.h>
main(int argc,char *argv[])
{
    int i;
    printf("Total arguments: %d",argc);
    for(i=0;i<argc;i++)
    printf("\n%s",argv[i]);
    getch();
}