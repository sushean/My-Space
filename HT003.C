#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int arr[3][3],i,j,k,l=0,m;
system("cls");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("ENTER ANY INTEGER :");
	scanf("%d",&arr[i][j]);
	}
}
printf("THE ARRAY IS :\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%4d",arr[i][j]);
	}
	printf("\n");
}
printf("=============================\n");
printf("ENTER NUMBER TO FIND IN ARRAY:");
scanf("%d",&k);
printf("=============================\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	if(k==arr[i][j])
	l=1;
	}
}
if(l==1)
{
printf("ENTER THE NUMBER TO REPLACE :");
scanf("%d",&m);
printf("=============================\n");
for(i=0;i<3;i++)
  {
	for(j=0;j<3;j++)
	{
	if(k==arr[i][j])
	arr[i][j]=m;
	}
  }
printf("THE NEW ARRAY IS ----->\n");
for(i=0;i<3;i++)
  {
	for(j=0;j<3;j++)
	{
	printf("%4d",arr[i][j]);
	}
	printf("\n");
  }
}
else
 {
printf("ENTERED NUMBER NOT FOUND IN THE ARRAY\n");
printf("=====================================\n");
 }
system("pause");
}
