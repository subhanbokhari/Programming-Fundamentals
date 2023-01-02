#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Please Input the 2 Numbers\n");

    scanf("%d %d",&a,&b);

    if (a>b)
    {
        printf("a is larger than b ");
    }
    else
    {
        printf("b is larger than a");
    }

    return 0;
}