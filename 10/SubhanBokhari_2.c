#include<stdio.h>
int main ()
{
    int arr[10];
    int even=0;
    int odd=0;

    printf("Please Input Num.\n");

    for(int i=0;i<10;i++)
    {
    scanf("%d",&arr[i]);
    }

    for(int i=0;i<10;i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d is Even\n",arr[i]);
            even++;
        }
        else
        {
            printf("%d is Odd\n",arr[i]);
            odd++;
        }
    }
    printf("------------------------------------\n");
    printf("Total Even = %d\n",even);
    printf("Total Odd = %d\n",odd);
    return 0;
}