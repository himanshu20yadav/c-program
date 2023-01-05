void print(int N);
main()
{
    print(5);

}
void print(int N)
{
    if(N>=1){
        printf("%d ",N);
        print(N-1);
    }
}