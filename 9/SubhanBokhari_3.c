#include<stdio.h>
int main ()
{
    int c;

    printf("How many rows?");
    scanf("%d",&c);

    for(int x=1;x<=c;x++)
    {
        for(int n =c;n>=x;n--)
        {
            printf("%d ",n);
        }
        printf(" \n");
    }

    return 0;
}