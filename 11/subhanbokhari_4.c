#include<stdio.h>
int main ()
{
    int arr[100][100];
    int arr2[100][100];
    int multi[100][100];
    int cols,rows,cols2,rows2;

    printf("Please Enter Coloumns and Rows for Matrix 1\n");
    scanf("\n %d \n %d",&cols,&rows);
    printf("Please Enter Coloumns and Rows for Matrix 2\n");
    scanf("\n %d \n %d",&cols2,&rows2);

    if(cols==rows2 )
        {
            printf("Please Enter Values for Matrix 1\n"); 
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
            }    
            printf("Please Enter Values for Matrix 2\n"); 
            for(int i=0;i<rows;i++)
                {
                    for(int j=0;j<cols;j++)
                    {
                        scanf("%d",&arr2[i][j]);
                    }
                }  
    for (int i=0;i<rows;++i) 
    {
         for (int j=0;j<cols2;++j) 
         {
             multi[i][j] = 0;
         }
    }

   for (int i=0;i<rows;++i) 
   {
      for (int j=0;j<cols2;++j) 
      {
         for (int k=0;k<cols;++k) 
         {
            multi[i][j] += arr[i][k]*arr2[k][j];
         }
      }
   }
        printf("The product of the two matrices is: \n"); 
        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<rows;j++) 
            {
                printf("%d\t", multi[i][j]);
            }
            printf("\n");
        }  
        }   
    else
    {
        printf("Cant be Multiplied Rows and Coloumns not equal");
        
    }
    return 0;
}