#include<stdio.h>
int fact(int x);


int main() 
{
   int r=1;
   int n;
   int x;
   int l=1;
 
    ("please input x\n");
    scanf("%d",&x);
 
    printf("please inputxn");
    scanf("%d",&n);
 
    for (int i=2;i<=n;n++)
    {
        r=r+((x+l)/fact(n));
        l++;
    }

    printf("%d",r);
    return 0;
}

int fact(int x)
{ 
    int y;  
    if (x>=1) 
    {   
        y = x * fact((x-1));   
    }
    return y; 
}