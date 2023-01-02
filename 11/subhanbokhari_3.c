#include<stdio.h>
int main ()
{

    int sales[3][4];
    int max=0;
    int count=0; 
    int row=0;
    int y1=0;
    int y2=0;
    int y3=0;

    for(int i=0;i<3;i++)
    {
        printf("Year %d:\n",i+1);
        for(int j=0;j<4;j++)
        {
            printf("Enter sales for Quater : %d\n",j+1);
            scanf("%d",&sales[i][j]);
            if(sales[i][j]>max)
            {
                max=sales[i][j];
                count=i;
                row=j;
            }
        }
        printf("\n");
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if (i==0)
            {
                y1=y1+sales[i][j];
            }
            if (i==1)
            {
                y2=y2+sales[i][j];
            }
            if (i==2)
            {
                y3=y3+sales[i][j];
            }
        }

    }
    printf("Year: 1 revenue: %d\n",y1);
    printf("Year: 2 revenue: %d\n",y2);
    printf("Year: 3 revenue: %d\n",y3);
    printf("\n");
    printf("Max Sales: %d in year %d Quater %d",max,count+1,row+1);


    return 0;
}