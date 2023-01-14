#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int num,rem,sum=0;
system("cls");
printf("ENTRE ANY INTEGER VALUE--->\n");
scanf("%d",&num);
while(num>0)
{
	rem = num % 10;
	sum = sum + rem;
	num = num / 10;
}
printf("THE SUM OF ALL THE DIGITS OF INTEGERS ARE:%d",sum);
printf("\n");
system("pause");
}
