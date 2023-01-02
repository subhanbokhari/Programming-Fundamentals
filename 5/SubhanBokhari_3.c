#include <stdio.h>
void revnum(int val)
{
    int rev=val%10;
    int rev2=val/10%10;
    int rev3=val/100;
    int c;
    
    c = (rev*100+rev2*10+rev3);

    printf("The Reversed Value = %d",c);

}

int main()
{
    int val = 941;
    revnum(val);

    return 0;
}