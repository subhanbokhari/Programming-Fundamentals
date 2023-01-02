#include<stdio.h>
void friendlypair(int x,int y);
int main ()
{
    int x;
    int y;

    printf("Please Input First Number   ");
    scanf("%d",&x);

    printf("Please Input Second Number   ");
    scanf("%d",&y);

    friendlypair(x,y);

    return 0;
}

void friendlypair(int x,int y)
{
    int sum=0;
    for(int i=1;i<=x;i++)
    {
        if (x%i==0)
            {
                sum=sum+((x/i)+i);
            }
    }
    int fp1=sum/x;

    int sum2=0;
    for(int i=1;i<=y;i++)
    {
        if(y%i==0)
        {
            sum2=sum2+((y/i)+i);
        }
    }
    int fp2=sum2/y;


    if (fp1==fp2)
    {
        printf("Both are Friendly Pairs :)");
    }
    else if (fp1!=fp2)
    {
        printf("Not Friendly Pairs");
    }
}
