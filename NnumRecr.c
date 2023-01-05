#include<stdio.h>
int main(){
   NNatnum(20);
}
int NNatnum(int n){
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
    
}
//or
/*void print
main()
{
    print(10);
}
void print(int N)
{
    if(N>=1){
        print(N-1);
        printf("%d",N);
        
    }
}*/