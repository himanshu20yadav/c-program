#include<stdio.h>
int main(){
    int a[10],i,max;
    printf("Enter 10 num:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
         if(max<a[i])
            max=a[i];
    printf("Gretest number is %d",max);
    getch();
}