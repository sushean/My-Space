#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i,j,x,arr[6];
system("cls");
for(i=1;i<6;i++)
{
printf("ENTER ANY INTEGER NUMBER:");
scanf("%d",&arr[i]);
}
printf("ENTERED NUMBERS ARE---->\n");
for(i=1;i<6;i++)
{
printf("%4d",arr[i]);
}
printf("\nENTER THE NUMBER TO INSERT IN SERIES:");
scanf("%d",&j);
printf("\nENTER THE LOCATION TO INSERT:");
scanf("%d",&x);
if(x<=6)
{
for(i=0;i<x;i++)
{
arr[i]=arr[i+1];
}
arr[x-1]=j;
for(i=0;i<6;i++)
{
printf("%4d",arr[i]);
}
}
else
{
printf("=================================\n");
printf("\nENTERED LOCATION DOESN'T EXIST \n\nENTER THE LOCATION BETWEEN [1-6]");
printf("\n=================================\n");
}
printf("\n");
system("pause");
}
