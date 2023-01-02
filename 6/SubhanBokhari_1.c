#include <stdio.h>

int main()
{
    int num;

    printf("Please Input the Number\n");
    scanf("%d",&num);

    if (num%2==1)
    {
        printf("It is a odd number.");
    }
    else if (num%2==0)
    {
        printf("It is a Even number.");
    }

    return 0;
}