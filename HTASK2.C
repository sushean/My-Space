#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i=1,x;
system("cls");
while(i<=5)
{       x=1;
	while(x<=i)
	{
	printf("%2d",i);
	x++;
	}
printf("\n");
i++;
}
system("pause");
}