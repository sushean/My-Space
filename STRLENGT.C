#include<stdio.h>
#include<process.h>
#include<conio.h>
int strlength(char x[]);
void main()
{
char nam[30];
int l=0;
printf("ENTER YOUR  STRING TO FIND THE LENGTH:");
gets(nam);
l=strlength(nam);
printf("\nRETURNED LENGTH OF STRING IS:%d\n",l);
system("pause");
}
int strlength(char x[])
{
int i=0;
while(x[i] !='\0')
{
i++;
}
return(i);
}