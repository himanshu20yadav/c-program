main()
{
    int n,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;n;i=i*2){
        for(j=1;j<i;j=j*2){
            printf("%d ",i+j);
            n--;
            if(n==0)
                break;
        }
    }
}//program to print first n positive number with two bits set .