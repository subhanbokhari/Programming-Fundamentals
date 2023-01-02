#include <stdio.h>
int monthlyexp(int a,int b,int c,int d, int e)
{
    int total;
    total = (a + b + c + d + e); 

    printf("The Total Monthly expenses are : %d\n",total);

    return total;

}
int yearlyexp(int total)
{
    int ytotal = (total *12);
}


int main ()
{
    int a,b,c,d,e;
    a=2000;
    b=15000;
    c=3000;
    d=70000;
    e=3000;
    int f = yearlyexp(monthlyexp(a,b,c,d,e));

    printf("The Yeary Estimated Expenses are : %d",f);

    return 0;
}