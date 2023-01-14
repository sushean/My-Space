#include<stdio.h>
#include<process.h>
#include<conio.h>
void strcopy(char *,char *);
void main()
{
char str1[25],str2[25];
system("cls");
printf("ENTER THE STRING :");
gets(str1);
strcopy(str1,str2);
printf("COPIED STRING IS :%s\n",str2);
system("pause");
}
void strcopy(char *x,char *y)
{
  int i=0;
  while(x[i]!='\0')
  {
	y[i]=x[i];
	i++;
  }
  y[i]='\0';
}


