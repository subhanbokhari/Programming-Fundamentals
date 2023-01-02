#include<stdio.h>
int main (){

float x,y;
float a;
char c;

printf("Please input operator.\n");
scanf("%c",&c);

printf("Please Input 2 values.\n");
scanf("%f %f",&x,&y);


switch (c)
{

case '+':
printf("%0.1f + %0.1f = %0.1f",x,y,x+y);
break;

case '-':
printf("%0.1f - %0.1f = %0.1f",x,y,x-y);
break;

case '*':
printf("%0.1f x %0.1f = %0.1f",x,y,x*y);
break;

case '/':
printf("%0.1f / %0.1f = %0.1f",x,y,x/y);
break;
}

return 0;
}