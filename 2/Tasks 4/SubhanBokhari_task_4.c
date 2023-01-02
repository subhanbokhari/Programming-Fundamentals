#include<stdio.h>  
int main() {
    int seconds = 12000000;
    int minutes = seconds/60;
    int hours = seconds/3600;
    int days = seconds/86400;

    printf("Seconds : %d\n",seconds);
  printf("Minutes : %d\n",minutes);
  printf("hours : %d\n",hours);
  printf("days : %d\n",days);
return 0;  
}
