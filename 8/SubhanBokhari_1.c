#include<stdio.h>

void tables(int a);

int main()
{
    char input;
    int a;
    int i;
    int flag=0;

    do
    {
        printf("Please Input the value.\n");
        scanf("%d",&a);
        tables(a);
        printf("Do you want to input another value?\n");
        scanf(" %c",&input);
        if (input == 'n' || input == 'N' )
        {
            flag = 1;
        }
        else if (input== 'y' || input == 'Y' )
        {
            flag = 0;
        }
        else if (input!= 'n' && input != 'N'&& input!= 'Y' && input != 'y')
        {
            printf("Invlaid Operator\n");
            flag = 1;
        }
    }
    while (flag ==0);

    if (flag == 1 )
    {
        printf("Thank You for using our Program! ");
    }
    
    return 0;
}


void tables(int a)
{
    for(int i = 1; i<=10;i++)
    {
    printf("%d X %d = %d\n",a,i,i*a);
    }
}