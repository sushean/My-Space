#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<string.h>
void main()
{
char x[10];
int len=0;
clrscr();
printf("ENTER YOUR NAME:");
gets(x);
len=strlen(x);
printf("STRING LENGTH IS :%d\n",len);
puts(x);
system("pause");
}
