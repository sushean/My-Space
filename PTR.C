#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int a=10,*ptr;
system("cls");
ptr=&a;
*ptr+=10;
printf("%u\n",*ptr);
*ptr=*ptr*3;
printf("%u\n",*ptr);
printf("%u\n",a);
printf("%u\n",ptr);
system("pause");
}