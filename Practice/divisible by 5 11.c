#include <stdio.h>
#include <stdbool.h>
int main()
{
  int a;
  bool check,check2;
 
 printf("Please Enter the Value");
 scanf("%d",&a);

 check= a % 5;
 check2= a % 11;

 if (check == 0){
     printf("Input is divisible by 5\n");
 }
 else{
     printf("Input is not divisible by 5\n");
 }
 if (check2 == 0){
      printf("Input is divisible by 11\n");
 }
 else{
      printf("Input is not divisible by 11\n");
 }
    return 0;
}