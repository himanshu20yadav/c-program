#include<stdio.h>
int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    
        if(n%i==0)
         return 0;
    return 1;
    
}
main()
{int n;
    printf("Enter number",n);
scanf("%d",&n);
    if(isprime(n))
       printf("prime number");
    else
      printf("not prime");
}