#include<stdio.h>
#include<process.h>
void main()
{
int num1,num2,num3;
printf("Entre 1st number");
scanf("%d",&num1);
printf("Entre 2nd number");
scanf("%d",&num2);
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf(" The sum of two number is:%d vaule of number1=%d and value of number2=%d\n",(num1+num2),num1,num2);
system("pause");
}