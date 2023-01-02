#include<stdio.h>
int main ()
{
    int fpp=0;
    float hr;
    int hp;
    int hwd;
    int sumoffixed=0;
    int sumofhourly=0;

    printf("Enter the number of fixed price projects:   ");
    scanf("%d",&fpp);

    int pop[fpp];

    for(int i=0;i<fpp;i++)
    {
        printf("Enter the price of project %d:  ",i+1);
        scanf("%d",&pop[i]);
    }

    printf("Enter your hourly rate in dollars:  ");
    scanf("%f",&hr);

    printf("Enter the number of hourly projects done:  ");
    scanf("%d",&hp);

    int hw[hp];

    for(int i=0;i<hp;i++)
    {
        printf("Enter the hours worked on project %d:   ",i+1);
        scanf("%d",&hw[i]);
    }

    for(int i=0;i<fpp;i++)
    {
        sumoffixed=sumoffixed+pop[i];
    }

    for(int i=0;i<hp;i++)
    {
        sumofhourly=sumofhourly+hw[i]*hr;
    }

    int totalincome=sumofhourly+sumoffixed;

    printf("------------------------------------------------------------------\n");
    printf("Income earned from fixed priced projects: %d$\n",sumoffixed);
    printf("Income earned from hourly priced projects: %d$\n",sumofhourly);
    printf("Total Income earned till now: %d$  ",totalincome);

    return 0;
}