#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int passcheck(char pass[]);

int main ()
{
    char name[50];
    char pass[8];
    char pass2[8];

    printf("Please Enter Your Name.\n");
    scanf("%s",name);
    printf("Please Enter You Password.\n");
    scanf(" %s",pass);

    int f = passcheck(pass);

    while(1!=0){
        if (f==1)
        {
            printf("Please Enter 8 values only.");
            scanf(" %s",pass);
        }
        if(f==2)
        {
            printf("Please Input Atleast 1 Special Character(%%, !, *, ^, &)\n Please Re-enter your password");
            scanf(" %s",pass);
        }
        if(f==0)
        {
            printf("Please Re-enter your password\n");
            scanf("%s",pass2);
            
            for(int i=0;i<8;i++)
            {
                if (pass[i]==pass2[i])
                {
                    printf("Invalid Password entered.");
                }
                else
                {
                    printf("You know what? You can be a great programmer.Keep Coding!");
                    break;
                }
            }
        }
        f = passcheck(pass);
    }
        

    return 0;
}

int passcheck(char pass[])
{
    int check; 
    int length2= strlen(pass);
    int chr;

    for(int i=0;i<8;i++) 
    {
    chr=pass[i];
        if(chr==37 || chr==42 || chr==94 || chr==33 || chr==38)
        {
            check=0;
        }
        else
        {
            check=2;
        }
    }
    if (length2<8 || length2>8)
    {
        check = 1;
    }
    return check;
    
} 