#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i=1;
char str[50];
system("cls");
printf("ENTER THE STRING :");
gets(str);
strupr(str);
while(str[i]!='\0')
{
if(str[i]==' ')
i+=2;
str[i]=str[i]+32;
i++;
}
printf("%s",str);
system("pause");
}