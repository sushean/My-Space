#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i,j,arr[6];
system("cls");
for(i=1;i<6;i++)
{
printf("ENTER ANY INTEGER VALUE:");
scanf("%2d",&arr[i]);
}
printf("ENTERED VALUES ARE--->\n");
for(i=1;i<6;i++)
{
printf("%2d",arr[i]);
}
printf("\nENTER THE INTEGER VALUEE TO INSERT--->");
scanf("%2d",&j);
for(i=0;i<5;i++)
{
arr[i]=arr[i+1];
}
arr[i]=j;
printf("THE SERIES AFTER INERTION IS -->\n");
for(i=0;i<6;i++)
{
printf("%3d",arr[i]);
}
printf("\n");
system("pause");
}