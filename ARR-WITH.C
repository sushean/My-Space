#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int arr[5],i,*ptr;
system("cls");
for(i=0;i<5;i++)
{
printf("ENTER THE INTEGER VALUE:");
scanf("%d",&arr[i]);
}
printf("ENTERED VALUE ARE AS UNDER USING POINTERS\n");
printf("-------------------------->\n");
ptr=&arr[0];
for(i=0;i<5;i++)
{
printf("%5d",*(ptr+i));
//ptr=ptr++; BASE ADDRESS WILL CHANGE
}
printf("\n");
system("pause");
}
