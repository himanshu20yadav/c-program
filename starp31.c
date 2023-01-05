#include<stdio.h>
int main(){int i,j,k,lines,num;
char alpha;
printf("enter the number of lines:");
scanf("%d",&lines);
    for(i=1;i<=lines;i++){
        k=1;
        num=1;
        alpha='A';
        for(j=1;j<=2*lines-1;j++){
            if(j>=lines+1-i&&j<=lines-1+i){
                if(k){
                    if(i%2==1)
                         printf("%d",num++);
                         else
                            printf("%c",alpha++);
                         }
                     
                else
                    printf(" ");
                k=1-k;
            }
            else
                printf(" ");
        }printf("\n");
    }
}