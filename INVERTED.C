#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int num1,num2,num3=0;
systemm("cls");
printf("ENTRE ANY INTEGER VALUE--->\n");
scanf("%d",&num1);
while(num1>0)
{
	num2=num1%10;
	num3=num2*10;
	num1=num1/10;
}
printf("THE INVERTED INTEGER IS:%d\n",num3);
system("pause");
}

