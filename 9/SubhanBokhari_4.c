#include<stdio.h>
int main ()
{
    int c;
    char a;

    printf("Enter a Character");
    scanf("%c",&a);

    printf("How many rows?");
    scanf("%d",&c);

    for(int x=1;x<=c;x++)
    {
        for(int n =c;n>=x;n--)
        {
            printf("%c ",a);
        }
        printf(" \n");
    }

    return 0;
}