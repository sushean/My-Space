#include<stdio.h>
#include<process.h>
#include<conio.h>
int pala(char y[]);
void main()
{
char x[30];
int l=0;
system("cls");
printf("ENTER THE STRING TO FIND :");
gets(x);
l=pala(x);
if(l==1)
printf("YES THE STRING IS PALINDROM\n");
else
printf("NO THE STRING IS NOT PALINDROM\n");
system("pause");
}
int pala(char y[])
{
int i=0,j,k;
while(y[i]!='\0')
{
i++;
}
j=i-1;
i=0;
while(y[i]!='\0')
{
if(y[i]!=y[j])
return (0);
i++;
j--;
}
return(1);
}


