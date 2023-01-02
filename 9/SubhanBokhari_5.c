#include<stdio.h>

int main()
{
    int i, j, n;

    printf("Enter Number of columns:");
    scanf("%d",&n);

    int c=1;

    for(i=1;i<n*2;i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("*");
        }

        if(i < n)
        {
            c++;
        }
        else
        {
            c--;
        }
        printf("\n");
    }

    return 0;
}