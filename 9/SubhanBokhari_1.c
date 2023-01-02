#include<stdio.h>

int factor(int x);

int main ()
{
    int no;
    int sum=0;
    int fact;
    printf("Enter a no:\n");
    scanf("%d",&no);

    for (int x=1;x<=no;x++)
    {
        fact=1;
        for (int i=x;i>=1;i--)
        {
        fact=(fact * i);
        }
        printf("%d! = %d\n",x,fact);
        sum = sum+fact;


    }
    printf("sum: %d",sum);
    return 0;
}