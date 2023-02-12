#include<stdio.h>
int main ()
{
    char choice;
    char other;

    printf("Enter a valid lettter.");
    scanf("%c", &choice);


    if (choice <= 90 && choice >=65)
    {
        printf("You entered %c in Upper Case\n",choice);
        other = choice +32;
        printf("After conversion to lower Case: %c\n",other);

    }
    else if (choice <=122 && choice>=97 )
    {
        printf("You entered %c in Lower Case.\n",choice);
        other = choice -32;
        printf("After conversion to upper Case: %c\n",other);
    }
    else 
    {
        printf("You didn't enter a valid character from abc...");
    }

    return 0;
}