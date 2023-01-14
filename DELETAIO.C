#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int arr[6],i,j;
system("cls");
for(i=0;i<6;i++)
{
printf("ENTER ANY INTEGER VALUE:");
scanf("%d",&arr[i]);
}
printf("\nENTERED SERIES IS --->\n");
for(i=0;i<6;i++)
{
printf("%4d",arr[i]);
}
printf("\nENTER LOCATION TO DELETE FROM SERIES:");
scanf("%d",&j);
if(j<6 &&j!=0 )
{
	for(;j<6;j++)
		{
		arr[j-1]=arr[j];
		}
	printf("\nENTERED SERIES AFTER DELETATION IS --->\n");
	for(i=0;i<5;i++)
		{
		printf("%4d",arr[i]);
		}
}
else if(j==6)
{
	printf("\nENTERED SERIES AFTER DELETATION IS --->\n");
	for(i=0;i<5;i++)
		{
		printf("%4d",arr[i]);
		}
}
else
printf("\nENTER VALID NO\nENTER NUMBER BETWEEN [1-6]\n");
printf("\n");
system("pause");
}
