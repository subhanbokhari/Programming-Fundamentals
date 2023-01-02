#include<stdio.h>
int main ()
{
    int rows; int cols;
    int arr[100][100];
    
    printf("How many Rows?  ");
    scanf("%d",&rows);

    printf("How many Coloumns?  ");
    scanf("%d",&cols);

    for (int i=0;i<rows;++i)
    {
        for (int j=0;j<cols;++j) 
        {
            printf("Enter value for Index %d%d: ",i,j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("\nOriginal Matrix\n");


    for (int i=0;i<rows;++i)
    {
        for (int j=0;j<cols;++j) 
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix\n");

    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
            printf("%d  ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}