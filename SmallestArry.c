#include<stdio.h>
int main(){
    int a[10],i,min;
    printf("Enter 10 number:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<=9;i++)
        if(min>=a[i])
            min=a[i];
    printf("Smallest number is :%d",min);

}