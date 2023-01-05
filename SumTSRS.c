int sum(int a,int b)
{
    int c;
    c=a+b;//a and b formal arguments
    return c;

}
main()
{
    int s,x,y;
    printf("Enter two numbers",x,y);
    scanf("%d%d",&x,&y);
    s=sum(x,y);//actual arguments
    printf("sum is %d",s);
    getch();
}