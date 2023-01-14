#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i,arr[5];
system("cls");
for(i=0;i<5;i++)
{
printf("ENTRE ANY INTEGER VALUE------>\n");
scanf("%d",&arr[i]);
}
i=i-1;
while(i>=0)
{
printf("%2d",arr[i]);
i--;
}
printf("\n");
system("pause");
}