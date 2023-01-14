#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<string.h>
void strcomp1(char *,char *);
void main()
{
char str1[25],str2[25];
system("cls");
printf("ENTER 1ST STRING :");
gets(str1);
printf("ENTER 2ND STRING :");
gets(str2);
strcomp1(str1,str2);
system("pause");
}
void strcomp1(char *x,char *y)
{
int i=0,k=0;
if(strlen(x)==strlen(y))
{
while(x[i]!='\0')
{
if(x[i]!=y[i])
{
k=1;
break;
}
i++;
}
if(k==1)
printf("ENTERED STRINGS ARE DIFFERNT\n");
else
printf("ENTERD STRINGS ARE SAME\n");
}
else
printf("ENTERED STRINGS ARE DIFFERNT\n");
}
