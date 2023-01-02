#include<stdio.h>
int main ()
{
    int sum=0;
    
    for (int x=1;x<=35;x++)
    {
        int marks;
        printf("Please Input your marks.");
        scanf("%d",marks);
        //marks = 35;
        sum = sum + marks;
    }

    printf("%d\n",sum);
    
    int avg = (sum/35);
    printf("%d",avg);

    return 0;
}