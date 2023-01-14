#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int i,j,arr[4][4],sum=0;
system("cls");
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
	printf("ENTER ANY INTEGER VALUE:");
	scanf("%d",&arr[i][j]);
	printf("-------------------------\n");
	}
}
printf("==================================\n");
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
	printf("%4d",arr[i][j]);
	sum=sum+arr[i][j];
	}
printf("\n");
}
printf("==================================\n");
printf("THE SUM OF ENTERED INTEGER IS:%d\n",sum);
printf("==================================\n");
system("pause");
}