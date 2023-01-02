#include<stdio.h> 

int main() {

int feet = 40;  
int Inch;  
int cm;

Inch = 12 * feet;  
 cm = (feet/3.26)*100;
    
 
printf("Value in centimeter(cm) = %d\n",cm);
printf ("Value in Inch is: %d \n", Inch);   
return 0;  
}