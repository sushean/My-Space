#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i=0,x=1,y;
system("cls");
while(i<=1000)
{
	printf("%4d",i);
	y=x+i;
	x=i;
	i=y;
}
system("pause");
}