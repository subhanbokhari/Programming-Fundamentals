#include <stdio.h>

    float pizzaslices()
    {
        float diameter =18.965;
        float radius = (diameter/2);
        float slices = (3.142*radius*radius)/(14.125);
        return slices;
    }

int main()
{
    float fslices = pizzaslices();

    printf("Welcome to Alan Pizza Pie.\n");
    printf("-----------------------------\n");
    printf("The Amount of pizza slices in this pizza is : %0.2f",fslices);

    return 0;
}