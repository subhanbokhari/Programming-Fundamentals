#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float chocolate,boxes,containers,check,remain_chocolate,remain_box;
    int first,second;
    printf("Quantity of Chocolates: ");
    scanf("%f", &chocolate);
    
    boxes=chocolate/22.0;
    first=boxes;
	containers=boxes/55.0;
	second=containers;
    
    remain_chocolate= remainder(chocolate,22.0);
	if (remain_chocolate == 1 )
    {
	check=boxes-first;
    int f =check*22.0;
	printf("No of boxes: %.0f ",boxes);
	printf("\nNo of extra chocolates: %.0f \n",f);
	}
	else
	{
	printf("No of boxes: %.0f \n",boxes);
	}

    
    remain_box = remainder(boxes,55.0);
    if (remain_box == 1 )
    {

    	check=containers-second;
    	printf("No of containers: %.0f ",containers);
    	printf("\nRemaining boxes: %.0f ",n);
	}
	else
	{
		printf("No of containers: %.0f \n",containers);
	}
    
    
}