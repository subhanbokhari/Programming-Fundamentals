// CHALLANGE: Find and fix the Errors
// Find the errros in the same code and correct the parts needed
// Your program should run and display correct output as expected 

#include<stdio.h>
int main()
{
	
	// assigning a float value in x from y and printing it
	float y =5.5;
	float x;
	x=y;
	printf("The value of x is: %0.1f\n", x);
	
	
	// seconds to mins conversion
	int seconds=5000;
	int mins=seconds/60.;
	printf("There are %d minutes in %d seconds\n", mins,seconds);
	
	
	// BMI calculator, output should be in float
	float weight=80.5;
	float height=2.3;
	float BMI=(weight/(height*height));
	printf("BMI: %f\n", BMI);
	return 0;
}