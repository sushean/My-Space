#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int arr1[3][3],arr2[3][3],arr3[3][3],i,j;
system("cls");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("ENTER INTEGERS FOR 1ST ARRAY:");
	scanf("%d",&arr1[i][j]);
	}
}
printf("========================================\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("ENTER INTEGERS FOR 2ND ARRAY:");
	scanf("%d",&arr2[i][j]);
	}
}
printf("=========================================\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	arr3[i][j]=arr1[i][j]+arr2[i][j];
	}
}
printf("=========================================\n");
printf("FIRST ARRAY IS ---->\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%4d",arr1[i][j]);
	}
	printf("\n");
}
printf("=========================================\n");
printf("SECOND ARRAY IS ---->\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%4d",arr2[i][j]);
	}
	printf("\n");
}
printf("=========================================\n");
printf("THIRD ARRAY IS ---->\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%4d",arr3[i][j]);
	}
	printf("\n");
}
system("pause");
}

