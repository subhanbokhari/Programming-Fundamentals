#include<stdio.h>

int main()

{
    float units,newunits;
    float final;
    int cal;

    printf("Please input the total units consumed.\n");
    scanf("%f",&units);

    if (units <= 50)
    {
        final = units*0.5;
    }
    if ((units > 50)&&(units<=150))
    {
        newunits = units-50;
        final = 50*0.5 + newunits*0.75;

    }
    if ((units > 150)&&(units <= 250))
    {
    newunits = units-150;
    final = 50*0.5 + 100*0.75 + newunits*1.20;
    }
    if (units > 250)
    {
        newunits = units-250;
        final = 50*0.5 + 100*0.75 + 100*1.20 + newunits*1.50;
    }
    final = final + (0.2*final);

    printf("The final price for %0.1f units is %0.3f",units,final);
    
    return 0;
}