#include<stdio.h>
#include<string.h>
int main ()
{
    char arr[100];
    int count=0;

    printf("Please Input a string without spaces\n");
    scanf("%s",arr);

    int l = strlen(arr);

    for(int i=0;i<=l;i++)
    {
        if(arr[i]!=arr[l-i-1])
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("Palindrome");
    }
    else if(count==1)
    {
        printf("Not Palindrome");
    }

    

    return 0;
}