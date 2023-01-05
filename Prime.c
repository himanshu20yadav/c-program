#include<stdio.h>
int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
     if(n%i==0)
      return 0;
    return 1;
}
main()
{
    if(isPrime(10))
       printf("prime number");
        else 
          printf("Not prime number");
          getch();
}
