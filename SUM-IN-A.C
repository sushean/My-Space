#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i,arr[5],sum=0;
system("cls");
for(i=0;i<5;i++)
{
	printf("ENTRE ANY INTEGER VALUE\n");
	scanf("%d",&arr[i]);
	}
for(i=0;i<5;i++)
{
	printf("%2d",arr[i]);
	sum=sum+arr[i];
	}

printf("\nTHE SUM OF ALL Elements of Array is:%d\n",sum);
system("pause");
}
