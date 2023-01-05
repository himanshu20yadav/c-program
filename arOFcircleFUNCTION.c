#include<stdio.h>
float area(int r)
{
    return 3.14*r*r;
}
main()
{
    int r;
    printf("radius",r);
    scanf("%d",&r);
    printf("%lf",area(r));
}