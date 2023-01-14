#include<stdio.h>
#include<process.h>
void main()
{
int num1=20,num2=15,x=5;
system("cls");
printf("Binary Operators\n");
printf("================\n");
printf("Num1=%d Num2=%d and Result is:%d\n",num1,num2,(num1+num2));
printf("Num1=%d Num2=%d and Result is:%d\n",num1,num2,(num1-num2));
printf("Num1=%d Num2=%d and Result is:%d\n",num1,num2,(num1*num2));
printf("Num1=%d Num2=%d and Result is:%d\n",num1,num2,(num1/num2));
printf("Num1=%d Num2=%d and Result is:%d\n",num1,num2,(num1%num2));
printf("Unary Operators\n");
printf("===============\n");
printf("X=%d after change X=%d\n",x,-x);
printf("Num1=%d Num2=%d\n",num1,num2);
num1++,num2--;
printf("After Increment and Decrement Num1=%d Num2=%d\n",num1,num2);
printf("Num1=%d Num2=%d\n",num1,num2);
printf("After Pre-Increment & Decrement Num1=%d Num2=%d\n",++num1,--num2);
printf("Compound Assignment Operators\n");
printf("=============================\n");
printf("Value of Num1 after evaluation this Expression num1+=10 is:%d\n",num1+=10);
printf("Value of Num1 after evaluation this Expression num1-=10 is:%d\n",num1-=10);
printf("Value of Num1 after evaluation this Expression num1*=10 is:%d\n",num1*=10);
printf("Value of Num1 after evaluation this Expression num1/=10 is:%d\n",num1/=10);
system("pause");
}
