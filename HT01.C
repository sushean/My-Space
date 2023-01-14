#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i=1,j,k;
system("cls");
while(i<=5)
  {
   j=0;
   while(j<=5-i)
	{
	printf(" ");
	j++;
	}
	j=1;
	while(j<=i)
	{
	printf("%d",j);
	j++;
	}       k=j-1;
		while(k>1)
		{
		printf("%d",k-1);
		k--;
		}
	printf("\n");
	i++;
  }
system("pause");
}