#include<stdio.h>

int main()
{
    float cost=1997.85;
    float tax=cost*0.0475;
    float fp=tax+cost;
    float tip=fp*0.1;
    fp=fp+tip;

    printf("Meal Cost: %0.2f Ruppees\n",cost);
    printf("----------------------\n");
    printf("Total Tax: %0.2f Ruppees\n",tax);
    printf("----------------------\n");
    printf("Tip Given: %0.2f Ruppees\n",tip);
    printf("----------------------\n");
    printf("----------------------\n");
    printf("Payable Cost: %0.2f Ruppees\n",fp);
    printf("----------------------\n");
    printf("----------------------");


    return 0;
}