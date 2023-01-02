#include<stdio.h>
int main ()
{
    int rows;
    int l=1;
    int val=0;
    int val2=1;
    int sum;
    printf("How many rows?");
    scanf("%d",&rows);

    printf("Pattern 1 :\n");
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d  ",l);
            l++;
        }
        printf("\n");
    }

        printf("\n");

    printf("Pattern 2 :\n");
    printf("0\n");
	for(int i=1;i<rows;i++)
	{
	   val=0;
       val2=1;
	   printf("0 1");
	   
		for(int j=1;j<i;j++)
		{
         sum=val+val2;
         printf(" %d",sum);
		 val=val2;
         val2=sum;
		}
		printf("\n");
	}
    printf("Pattern 3 :\n");
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",'A'-1 + i);
        }
        printf("\n");
    }
    return 0;
}