#include<stdio.h>
#include<process.h>
void main()
{int num1,num2;
system("cls");
printf("ENTRE 1ST NUMBER\n");
scanf("%d",&num1);
printf("ENTRE 2ND NUMBER\n");
scanf("%d",&num2);
num1=num1*num2;
num2=num1/num2;
num1=num1/num2;
printf("after interchanging the the values number1 is:%d and number2 is:%d\n",num1,num2);
printf("THE SUM OF TWO NUMBER IS:%d\n",(num1+num2));
system("pause");
}