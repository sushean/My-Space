#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
start:
int x,y;
char ch='Y';
system("cls");
printf("ENTRE THE FIRST NO.\n");
scanf("%d",&x);
printf("ENTRE THE SECOND NO.\n");
scanf("%d",&y);
printf("============================================\n");
printf("THE SUM OF TWO NUMBERS IS:%d\n",(x+y));
printf("============================================\n");
printf("WANT TO ADD MORE NUMBERS(Y/N)\n");
ch=getche();
if(ch=='Y' || ch=='y')
goto start;
system("pause");
}