#include<stdio.h>

int main()
{
    float y=987.0;
    float x=1230.0;
    float oct= (x-y);
    float tp= (oct*5);


    printf("Units Consumed in October: %0.2f\n",oct);
    printf("Total Cost of Total Units: %0.2f Ruppees",tp);
    return 0;
}