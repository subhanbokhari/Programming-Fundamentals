#include <stdio.h>
void ages(int subhan,int taha,int hamza)
{
    if (subhan>taha && subhan>hamza)
    {
        printf("Subhan is the eldest ");
    }
    else  if (subhan<taha && taha>hamza)
    {
        printf("Taha is the eldest ");
    }
     if (hamza>taha && subhan<hamza)
    {
        printf("Hamza is the eldest ");
    }
 
 if (subhan == taha )
 {
    if (hamza>taha)
    {
        printf("hamza is the eldest");
    } 
    else
    {
        printf("taha & subhan are the eldest");
    }
 }

  if (hamza == taha )
 {
    if (hamza>subhan)
    {
        printf("Hamza is the eldest");
    } 
    else
    {
        printf("Taha & Hamza are the eldest");
    }
 }
  if (subhan == hamza )
 {
    if (taha>hamza)
    {
        printf("Taha is the eldest");
    } 
    else      
    {
      printf("Hamza & Subhan is the eldest");
    }
 }

}

int main()
{
    int subhan;
    int taha;
    int hamza;
    printf("Please Input the 3 Ages\n");

    scanf("%d %d %d",&subhan,&taha,&hamza);
    ages(subhan,taha,hamza);

   
    return 0;
}