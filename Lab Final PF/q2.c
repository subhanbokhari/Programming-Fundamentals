#include<stdio.h>
int main ()
{
    int rows;
    int cols;
    int sum=0;
    printf("How many Rows?  ");
    scanf("%d",&rows);

    printf("How many Coloumns?  ");
    scanf("%d",&cols);

    int arr[rows][cols];

    for (int i=0;i<rows;++i)
    {
        for (int j=0;j<cols;++j) 
        {
            printf("Enter value for Index %d%d: ",i,j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("Entered Matrix :\n");

    for (int i=0;i<rows;++i)
    {
        for (int j=0;j<cols;++j) 
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }


    printf("Boundaries of the Matrix\n");
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++) 
        {
            if (i == 0 || j == 0 || i == rows - 1|| j == rows - 1)
                {
                    printf(" %d", arr[i][j]);
                    sum=sum+arr[i][j];
                }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("Sum of Boundary is %d", sum);

    return 0;
}