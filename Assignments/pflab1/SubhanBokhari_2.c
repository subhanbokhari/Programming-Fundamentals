#include<stdio.h>
int monthlySubscriptionIncome(int);
int YearlySubscriptionIncome(int);


int main()
{
	int monthly,yearly;
	int fp;
	int m,y;

	printf("Enter the no of monthly availed monthly Subscription :\n");
	scanf("%d",&monthly);
   
    printf("Enter the no of monthly availed Yearly Subscription :\n");
	scanf("%d", &yearly);
	
    m= monthlySubscriptionIncome (monthly);
	
    y= YearlySubscriptionIncome(yearly);

    fp=m+y;

	printf("Total Revenue Generated: %d$",fp);
}

int monthlySubscriptionIncome(int monthly_user)
{
    int monthly=15;
   int rev= monthly*monthly_user ;
   return rev ;
}
int YearlySubscriptionIncome(int yearly_user)
{
    int yearly=100;
	int rev2= yearly*yearly_user;
	return rev2  ;	
}
