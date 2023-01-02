#include <stdio.h>

int main()
{

int a =3;
int b =2;
int c;
printf("Initial value of a :%d\n",a);
printf("Initial value of b :%d\n",b);


c=a;
a=b;
b=c;

printf("Swap value of a :%d\n",a);
printf("Swap value of b :%d\n",b);
    return 0;
}
