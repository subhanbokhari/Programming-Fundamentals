#include <stdio.h>

float fangle(float a, float b)
{
    float angle3 = (180-(a +b));
    return angle3;

}

int main()
{
    float a = 67.8;
    float b = 75.2;
    float c;
    c = fangle(a,b);
    printf("The Value of 3rd Value is : %0.2f",c);

    return 0;
}