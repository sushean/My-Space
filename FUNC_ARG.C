#include<stdio.h>
#include<process.h>
#include<conio.h>
void line(int);
void main()
{
system("cls");
line(41);
printf("HELLO WELCOME TO THE WORLD OF C LANGUAGE\n");
line(41);
system("pause");
}
void line(int x)
{
int i;
for(i=1;i<=x;i++)
{
printf("=");
}
printf("\n");
}
