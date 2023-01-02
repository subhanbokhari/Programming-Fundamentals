#include<stdio.h>

int main()
{
    int n=5000;
    int hours = (n /3600);
    int minutes = ((n/60)-hours*60);
    int seconds = ((n-minutes*60)-(hours*3600));


  printf("%d hour, %d minutes and %d seconds.",hours,minutes,seconds);
    return 0;
}

