#include<stdio.h>
int main ()
{
    float weight;
    float distance;
    float l;

    printf("Please Input the weight of the Package in Kg:\n");
    scanf("%f",&weight);

    if (weight>0 && weight<=20 )    
    {
        printf("Please Input the distance of the destination in Miles.\n");
        scanf("%f",&distance);
        if (distance<10 || distance>3000)
        {
            printf("Sorry TCS does not deliver to such distances\n");
        }
    }
    else if (weight<=0 || weight>20 )
    {
     printf("Sorry weight cannot be negative, zero or greater than 20 kg\n");
    }
   

    if (weight>0 && weight<=20)
        {
            if (distance>=10 && distance<3000)
            {
             if (weight<=2)
                {
                   l= ((distance/500)*1.10);
                }
                if (weight>2 && weight<=6)
                {
                    l= ((distance/500)*2.20);
                }
                if (weight>6 && weight<=10)
                {
                    l= ((distance/500)*3.70);
                }
                if (weight>10 && weight<=20)
                {
                     l= ((distance/500)*4.80);
                }
        printf("------------------------------------\n");        
        printf("Thank You!\nTotal Charges : %0.3f$\n",l);
        printf("------------------------------------\n");     

        }
    }
    return 0;
}