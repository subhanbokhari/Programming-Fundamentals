#include <stdio.h>

int main()
{
    int val1;
    int val2;

    printf("Please Input Value 1\n");
    scanf("%d",&val1);

    
    printf("Please Input Value 2\n");
    scanf("%d",&val2);

    if (val1 == val2 )
    {
        printf("The values are equal.");
    }
    else
    {
        printf("The values are not equal.");
    }
    return 0;
}
