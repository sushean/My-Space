#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<string.h>
int strrev1(char x[]);
void main()
{
char str[50];
system("cls");
printf("======================================\n");
printf("ENTER THE STRING YOU WANT TO REVERSE :");
gets(str);
printf("======================================\n");
strrev1(str);
system("pause");
}
int strrev1(char x[])
{
int i,j=0;
char y[50];
i=strlen(x)-1;
while(i>=0)
{
y[j]=x[i];
i--;
j++;
}
y[j+1]='\0';
printf("STRING AFTER REVERSE IS :%s\n",y);
return 0;
}



