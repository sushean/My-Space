#include<stdio.h>
#include<process.h>
void main()
{
float x[5],*p;
int i;
system("cls");
for(i=0;i<5;i++)
{
printf("ENTER THE VALUE :");
scanf("%f",&x[i]);
}
p=&x[0];
for(i=0;i<5;i++)
{
printf("%f  ",*p);//BASE VALUE CHANGED
p++;
}
system("pause");
}