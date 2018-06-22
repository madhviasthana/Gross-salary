//Program to calculate gross salary per month
// The person gives dearance allowance of 40% and 20% to house rent from the salary

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int salary=0, d,hr;
 float gross;
printf("enter your salary\n \n");
scanf("%d",&salary);
   d= salary*40/100;
   hr=salary*20/100;
   salary = salary-d-hr;     //remaining salary
   gross   = salary/12;         //gross salary = salary/12
   printf("gross salary is %f \n \n",gross);
   return 0;

}
