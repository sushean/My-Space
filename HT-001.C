#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int arr[10],i,j,k=0,l;
system("cls");
for(i=0;i<10;i++)
{
	arr[i]=i+1;
}
printf("DATABASE IS ----->\n");
for(i=0;i<10;i++)
{
	printf("%4d",arr[i]);
}

printf("\nENTER THE NUMBER TO FIND IN DATABASE:");
scanf("%d",&j);
printf("\n");
for(i=0;i<10;i++)
{
	if(arr[i]==j)
	{
	  k=1;
	  l=i;
	}
}
if(k==1)
	{
	printf("============================\n");
	printf("NUMBER FOUND IN THE DATABASE\nTHE NUMBER IS:%d",j);
	printf("\nTHE NUMBER IS SAVED AT THE ARRY[%d]",l);
	printf("\n============================\n");
	}
else
	{
	printf("================================\n");
	printf("NUMBER NOT FOUND IN THE DATABASE\n");
	printf("================================\n");
	}
if(k==1)
{
	printf("\nAFTER DELETATION THE DATABASE IS ------->\n");
	if(l<10)
	{
	  for(;l<10;l++)
	{
	  arr[l]=arr[l+1];
	}
for(i=0;i<9;i++)
{
	printf("%4d",arr[i]);
}
}
else if(l==10)
{
	for(i=0;i<9;i++)
	{
	  printf("%4d",arr[i]);
	}
}
}
printf("\n");
system("pause");
}


