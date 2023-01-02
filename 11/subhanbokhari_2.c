#include<stdio.h>
int main ()
{
    int mat;
    int cols;
    int arr[100][100];
    int sum=0; 
    int sum2=0;
    
    printf("Enter the dimension of square matrix:   ");
    scanf("%d",&mat);

    for (int i=0;i<mat;++i)
    {
        for (int j=0;j<mat;++j) 
        {
            printf("Enter value for Index %d%d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("\nOriginal Matrix\n");

    for (int i=0;i<mat;++i)
    {
        for (int j=0;j<mat;++j) 
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<mat;i++)
    {
        for(int j=0; j<mat; j++)
        {
            if(i==j)
            {
                sum = sum+arr[i][j];
            }
            if ((i+j) == mat-1)   //when 2==2
            {
                sum2=sum2+arr[i][j];
            }
        }
    }

    printf("Sum of Left Diagonal: %d\n",sum);
    printf("\n");
    printf("Sum of Right Diagonal: %d",sum2);    
    return 0;
}