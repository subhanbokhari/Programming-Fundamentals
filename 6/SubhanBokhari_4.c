#include <stdio.h>
void calculateAttendance(float classesAttended, float classesTotal)
{
    float perc = ((classesAttended/classesTotal)*100);

    if (perc>80)
    {
        printf("Your attendance is: %0.2f \n",perc);  
        printf("You are allowed to sit in the exam");  
        
    }
    else 
    {
        printf("Your attendance is: %0.2f\n",perc);  
        printf("You are not allowed to sit in the exam"); 
    }
}


int main()
{
    int classesTotal;
    int classesAttended;
   printf("Please Input total classes of the subject and Total Classes attended\n");
   scanf("%d \n %d",&classesTotal,&classesAttended);
   calculateAttendance(classesAttended,classesTotal);
    return 0;
}