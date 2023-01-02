#include <stdio.h>

int main()
{
    int count=2;
    int val,expenses,budget,total=0;
    char check;

    printf("Please enter Monthly Budgeted amount: ");
    scanf("%d",&val);

    for(int b=1;b<=count;b++)
    {
    printf("Enter expense %d: ",b);
    scanf("%d",&expenses);
    total=total + expenses;
    printf("total: %d \n",total);

    printf("Do you want to enter another expense?  enter y/n  \n");
    scanf(" %c",&check);

    if (check=='y' || check=='Y')
    {
    count = count +1;
    continue;
    }
    else if (check=='n' || check=='N')
    {
    break;
    }

    else
    {
    printf("Invalid");
    break;
    }
    }
    budget=val-total;

    if(val>=total)
    {
        printf("You are within your budget");
        printf("\nRemaining amount %d$",budget);
    }
    else
    {
        printf("Going Out of your budget");
        printf("\nYour budget is %d$",budget);
    }
return 0;
}