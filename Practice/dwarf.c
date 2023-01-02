#include<stdio.h>

int main()
{
    float h;

    printf("Please Enter your Height.\n");
    scanf("%f",&h);

    if (h <= 147)
    {
        printf("You are a Dwarf. Grow UP.");
    }
    else
    {
        printf("You are a Normal human.");
    }

    return 0;
}