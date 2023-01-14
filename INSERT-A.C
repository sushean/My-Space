#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i,j,x,arr[6];
system("cls");
for(i=0;i<5;i++)
{
printf("ENTRE THE INTEGER VALUE:");
scanf("%d",&arr[i]);
}
printf("THE ENTERED VALUES ARE--->\n");
for(i=0;i<5;i++)
{
printf("%2d",arr[i]);
}
printf("\nENTER THE VALUE TO INSERT:");
scanf("%d",&j);
for(i=6;i>0;i--)
{
arr[i]=arr[i-1];
}
arr[i]=j ;
for(i=0;i<6;i++)
{printf("%2d",arr[i]);
}
system("pause");
}
