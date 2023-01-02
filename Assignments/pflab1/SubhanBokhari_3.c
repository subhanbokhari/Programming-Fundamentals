#include<stdio.h>
int main()
{
    int day;
	int month;
	int year;
	char check;
    printf("Enter your date of birth in this format DD-MM-YYYY(with dashes): ");
    scanf("%d-%d-%d",&day,&month,&year);
   do {
    if((day>0 && day<32) && (month>0 && month<=12))
    	{
        
        if((day>=21 && day<=31) && (month==3)) 
        {
            printf("Aries\n");
        }
        if((day>=1 && day<=19) && (month==4))
        {
            printf("Aries\n");
        }
        

        
        if((day>=20 && day<=30) && (month==4))
        {
            printf("Taurus\n");
        }
        if((day>=1 && day<=20) && (month==5))
        {
            printf("Taurus\n");
        }
       

        
        if((day>=21 && day<=31) && (month==5))
        {
            printf("Gemini\n");
        }
        if((day>=1 && day<=20) && (month==6))
        {
            printf("Gemini\n");
        }
      

        
        if((day>=21 && day<=30) && (month==6))
        {
            printf("Cancer\n");
        }
        if((day>=1 && day<=22) && (month==7))
        {
            printf("Cancer\n");
        }
       

        
        if((day>=23 && day<=31) && (month==7))
        {
            printf("Leo\n");
        }
        if((day>=1 && day<=22) && (month==8))
        {
            printf("Leo\n");
        }
        

        
        if((day>=23 && day<=31) && (month==8))
        {
            printf("Virgo\n");
        }
        if((day>=1 && day<=22) && (month==9))
        {
            printf("Virgo\n");
        }
       

        
        if((day>=23 && day<=30) && (month==9))
        {
            printf("Libra\n");
        }
        if((day>=1 && day<=22) && (month==10))
        {
            printf("Libra\n");
        }
        

        
        if((day>=23 && day<=31) && (month==10))
        {
            printf("Scorpio\n");
        }
        if((day>=1 && day<=21) && (month==11))
        {
            printf("Scorpio\n");
        }
       

        
        if((day>=22 && day<=30) && (month==11))
        {
            printf("Sagittarius\n");
        }
        if((day>=1 && day<=21) && (month==12))
        {
            printf("Sagittarius\n");
        }
        

       
        if((day>=22 && day<=31) && (month==12))
        {
            printf("Capricorn\n");
        }
        if((day>=1 && day<=19) && (month==1))
        {
            printf("Capricorn\n");
       }
        

       
        if((day>=20 && day<=31) && (month==1))
        {
            printf("Aquarius\n");
        }
        if((day>=1 && day<=18) && (month==2))
        {
            printf("Aquarius\n");
        }
        

        
        if((day>=19 && day<=28) && (month==2))
        {
            printf("Pisces\n");
        }
        if((day>=1 && day<=20) && (month==3))
        {
            printf("Pisces\n");
        }

    printf("\nDo you want to check Zodiac sign again: ");
        scanf(" %c",&check);}
	
	    while( check=='y' || check=='Y');
	
	    if (check=='n' || check== 'N')
	    {
	    	printf ("See you again ;)");
	    }
	}
    }
    else
    {
        printf("Invalid Date Enter");
    }
    } while (input==1);
    
    }

