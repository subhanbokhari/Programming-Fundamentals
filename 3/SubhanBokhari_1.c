#include <stdio.h>

int main()
{
    float weight = 80.9;
    float height = 1.9;
    float bmi;

    bmi = (weight/(height*height));

printf("Body Mass Index(Kg/m^2) :%0.2f",bmi);


    return 0;
}
