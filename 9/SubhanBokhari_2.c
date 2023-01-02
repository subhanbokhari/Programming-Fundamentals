#include<stdio.h>
int main ()
{
    int c;
    printf("How many rows?");
    scanf("%d",&c);

    for(int x=c;x>=1;x--)
    {
        for(int n =1;n<=c;n++)
        {
            if (x>n)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}