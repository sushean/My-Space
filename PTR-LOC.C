#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
float x,y,z,*ptr;
system("cls");
ptr=&z;
x=10;
y=20;
z=30;
printf("%u\n",ptr);
printf("%u\n",ptr+1);
printf("%u\n",ptr+2);
printf("%u\n",ptr);
system("pause");
}