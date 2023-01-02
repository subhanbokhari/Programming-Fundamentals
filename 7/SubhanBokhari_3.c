#include<stdio.h>

int fact(int x);
int n_c_r(int n, int r);

int main ()
{
    int n,r;

    printf("Please Input N and R\n");
    scanf("%d \n %d",&n,&r);
    
    if (r>n)
    {
        printf("Please Input N greater than R");
    }
    else
    {
    int x = n_c_r(n,r);
    printf("The Value is %d",x);
    }

 return 0;
}

int fact(int x)
{
    int y;

    if (x>=1)
    {
    y = x * fact((x-1));
    return y;
    }
    else
    {
    return 1;
    }
    
}

int n_c_r(int n, int r)
{
    int l = ((fact(n))/(fact(r)*fact(n-r)));
    
    return l;
}