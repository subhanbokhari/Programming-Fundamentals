#include <stdio.h>

int main()
{
  int a;
  int b;
  int c;

printf("Please Input a");
scanf("%d",&a);
printf("Please Input b");
scanf("%d",&b);
printf("Please Input c");
scanf("%d",&c);


    {
    if (a>b && a>c) 
      printf("The largest:%d\n",a);
    else if ( b>c  && b>a)
    printf ("the biggest  is %d\n",b);
     else if  (c>b  && c>a)
        printf("the bigger is %d",c);
    }
       return 0;
}
