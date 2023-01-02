#include <stdio.h>

void degconv(float c)
{
    float far = (c * 9/5) + 32 ;
    printf("The temperature in farenheit is : %0.2f",far);
}


int main()
{
    float c=37.5;
    degconv(c);

    return 0;
}
