#include <stdio.h>
int main()
{
    int num[15], n,count=0;	
    int k;
    
       printf("Input elements in the array :\n");
       for(int i=0;i<n;i++)
        {
	      scanf("%d",&num[i]);
	    }
    printf("unique elements: \n");
    for(int i=0; i<n; i++)
    {
        count=0;
        for(int j=0,k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(num[i]==num[j])
              {
                 count++;
               }
             }
        }
       if(count==0)
        {
          printf("%d ",num[i]);
        }
    }
       printf("\n\n");
}

