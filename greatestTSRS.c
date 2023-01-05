#include<stdio.h>
int greatest(int a,int b, int c,int d)
{
    int max;
    if(a>b)
     max=a>c?a>d?a:d:c>d?c:d;
   else 
     max=b>c?c>d?b:d:c>d?c:d;
    return max;
}
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int ans=greatest(a,b,c,d);
    printf("%d",ans);
    return 0;
}