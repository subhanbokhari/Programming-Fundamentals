#include<stdio.h>
int main ()
{
    char choice;
    char choice2;
    int finalprice;

    printf("Do You Want a Burger?Y/N\n");
    scanf(" %c", &choice);
    
    if (choice == 'Y' || choice == 'y' )
    {

        printf("Burger Added!\nDo you want a fries and drink as addon? Just for 200 Rs (Y/N)\n");
        scanf(" %c", &choice2);

        if (choice2 == 'y' || choice2 == 'Y' )
        {
            finalprice= 700;
            printf("------------------------------------\n");     
            printf("------------------------------------\n");     
            printf("Total Bill :%d\n",finalprice);
            printf("------------------------------------\n");
            printf("------------------------------------\n");
            printf("Thank You!\n");             
        }
        else if (choice2 == 'N' || choice2 == 'n')
        {
            finalprice= 500;

            printf("------------------------------------\n");     
            printf("------------------------------------\n");     
            printf("Total Bill :%d\n",finalprice);
            printf("------------------------------------\n");
            printf("------------------------------------\n");
            printf("Thank You!\n");  
        } 
        else
        {
            printf("Invalid Input");
        }
    }
    else if (choice == 'N' || choice == 'n' )
    {
        printf("No Problem. See you next time.\n");
    }
    else 
    {
        printf("Invalid Input.");
    }
    return 0;
}
     