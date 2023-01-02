#include<stdio.h>
int main ()
{
    int val,val2;

    printf("Please Input value 1\n");
    scanf("%d",&val);

    printf("Please Input value 2\n");
    scanf("%d",&val2);

    int t3 = (val+val2);

    printf("%d\n",val);

    printf("%d\n",val2);

    for (int i=3;i<=10;i++)
    {
        printf("%d\n",t3);
        val=val2;
        val2=t3;
        t3 = (val+val2);
        
    }

    return 0;
}