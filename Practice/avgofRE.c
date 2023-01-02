#include<stdio.h>
int main ()
{
    float sum = 0;
    for (int i=1;i<=10;i++)
    {
        sum +=i;
    }
    printf("%d\n",sum);
    float avg = sum/10;
    printf("Average is %0.1f",avg);
    return 0;
}