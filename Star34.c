#include<stdio.h>
int main(){
    int i,j,rows,k=1,p;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        p=k;
        for(j=1;j<=i;j++){
            printf("%d",p);
            p=p-(rows-i+j);

        }printf("\n");
        k=k+1+rows-1;
    }
}