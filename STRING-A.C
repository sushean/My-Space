#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<string.h>
void main()
{
int i=0,j=0;
char str1[50],str2[50];
clrscr();
printf("ENTER THE 1ST STRING :");
gets(str1);
printf("ENTER THE 2ND STRING :");
gets(str2);
i=strlen(str1);
str1[i]=' ';
while(str2[j]!='\0')
{
 str1[i+1]=str2[j];
 j++;
 i++;
}
str1[i+1]='\0';
printf("%s\n",str1);
system("pause");
}