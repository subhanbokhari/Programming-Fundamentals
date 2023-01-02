#include<stdio.h>

int main()
{
    float x=470.0;
    float y=1.0;
    float z=8.0;
    float x1=x*1000;
    float s1= (y*3600)+(z*60);

    float a=470.0;
    float b=1.0;
    float c=16.0;
    float s2= (b*3600)+(c*60);
    float a1=a*1000;
    float speedA;
    float speedH;

    speedA= (x1/s1);
    speedH= (a1/s2);

    printf("Speed of Ahmed is: %0.2f\n",speedA);
    printf("Speed of Haider is: %0.2f",speedH);
    

    return 0;
}