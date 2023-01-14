#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i=1,j;
system("cls");
while(i<=5)
{
	j=5;
	while(j>=i)
	{
		printf("%2d",j);
		j--;
		}
	printf("\n");
	i++;
	}
system("pause");
}