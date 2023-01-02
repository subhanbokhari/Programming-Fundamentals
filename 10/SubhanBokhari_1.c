#include<stdio.h>
int main ()
{
    int max=0;
    int min=100;
    float avg;
    int marks[10];
    float total=0;

    for(int i=0;i<10;i++)
    {
    printf("Please Input your marks.(0-100)");
    scanf("%d",&marks[i]);
    }
    
    for(int i=0;i<10;i++)
    {
        if (marks[i]>max)
        {
            max = marks[i];
        }
            if(marks[i]<min)
        {
            min = marks[i];
        }

        total= total + marks[i];
    }
    
    avg= total/10;

    printf("Maximum Marks = %d\n",max);
    printf("Minimum Marks = %d\n",min);
    printf("Average marks = %0.2f\n",avg);
    return 0;
}