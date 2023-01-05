int isEven(int x)
{
    if(x%2==0)
     return 1;
    return 0;

}
main()
{
    int x;
    printf("enter a number",x);
    scanf("%d",&x);
    if(isEven(x))
       printf("even");
    else
    printf("odd");
}