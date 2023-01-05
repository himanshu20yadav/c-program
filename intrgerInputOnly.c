#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0;
    a=getInput();
    printf("\nyou have enterd:%d",a);
    return 0;

}
 
int getInput()
{int num=0,ch;
for(;;)
{
    ch=getche();
    if(ch>=48 && ch<=57)
    {num=num*10+(ch-48);
    }
    if(ch==13)
    break;
}return num;
}