#include <stdio.h>
int main()
 {
	int a, i, j = 1, x = 0;

	printf("Input number of elements in a line : \n");
	scanf("%d", &a);

	for(i = 1; i <= 50; i++)
    {
		printf("%d	",i);
	 if (i % a == 0)
		{
			printf ("\n");
		} 
	}
	
	return 0;
}