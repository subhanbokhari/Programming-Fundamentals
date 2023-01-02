#include <stdio.h>

int main()
{
    int val=123,rev,rev2,rev3,c;

    rev=val%10;
    rev2=val/10%10;
    rev3=val/100;
    
    c = (rev*100+rev2*10+rev3);

    printf("The Reversed Value = %d",c);

    return 0;
}

