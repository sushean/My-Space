#include<stdio.h>
#include<process.h>
void main()
{
int x=10,y=15,z=20;
system("cls");
if(x>y && x>z)
{
printf(" x is greater than y and z\n");
printf(" the value of x is:%d\n",x);
}
else if(y>x && y>z)
{
printf(" y is greater than x and z\n");
printf(" the value of y is:%d\n",y);
}
else
{
printf(" z is greater than x and y\n");
printf(" the value of z is :%d\n",z);
}
system("pause");
}