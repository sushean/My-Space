#include<stdio.h>
int main()
{
char gender;
float salary,bonus;
label:
clrscr();
printf("PLEASE ENTER THE GENDER/SEX\n M/m : MALE \n F/f : FEMALE\n--> ");
scanf("%c",&gender);
switch(gender)
{
case 'M' :
case 'm' : printf("ENTER THE SALARY OF THE EMPLOYEE :");
	   scanf("%f",&salary);
	   if(salary>10000)
	   {
	   bonus=salary*0.05;
	   printf("BONUS IS %.3f",bonus);
	   printf("\nSalary After Bonus Is %.2f",salary+bonus);
	   }
	   else if(salary>0 &&salary<=10000)
	   {
	   bonus=salary*0.07;
	   printf("BONUS IS %.3f",bonus);
	   printf("\nSalary After Bonus Is %.2f",salary+bonus);
	   }
	   else
	   {
	   printf("----------INVALID INPUT-------------\n");
	   printf("PLEASE ENTER THE CORRECT INPUT ");
	   goto label;
	   }
	   break;

case 'F' :
case 'f' : printf("ENTER THE SALARY OF THE EMPLOYEE :");
	   scanf("%f",&salary);
	   if(salary>10000)
	   {
	   bonus=salary*0.10;
	   printf("BONUS IS %.3f",bonus);
	   printf("\nSalary After Bonus Is %.2f",salary+bonus);
	   }
	   else if(salary>0 &&salary<=10000)
	   {
	   bonus=salary*0.12;
	   printf("BONUS IS %.3f",bonus);
	   printf("\nSalary After Bonus Is %.2f",salary+bonus);
	   }
	   else
	   {
	   printf("----------INVALID INPUT-------------\n");
	   printf("PLEASE ENTER THE CORRECT INPUT ");
	   goto label;
	   }
	   break;
default :  printf("----------INVALID INPUT-------------\n");
	   printf("PLEASE ENTER THE CORRECT INPUT ");
	   break;
}
getch();
return 0;
}