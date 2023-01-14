
#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int arr[3][3],ar1[3],ar2[3],i,j;
system("cls");
for(i=0;i<3;i++)
{
 ar1[i]=0;
 ar2[i]=0;
	for(j=0;j<3;j++)
	{
	printf("ENTER ANY INTEGER VALUE:");
	scanf("%d",&arr[i][j]);
	}
}
printf("ENTERED VALUES ARE AS UNDER\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%4d",arr[i][j]);
	ar1[i]=ar1[i]+arr[i][j];
	ar2[i]=ar2[i]+arr[j][i];
	}
	printf("\n");
}
for(i=0;i<3;i++)
{
 printf("THE SUM OF %d row is :%d\n",i+1,ar1[i]);
 }
for(i=0;i<3;i++)
{
printf("THE SUM OF %d column is :%d\n",i+1,ar2[i]);
}
system("pause");
}