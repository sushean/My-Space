#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
char str1[30],str2[30];
int i=0,k=2;
system("cls");
printf("ENTER THE 1ST STRING:");
gets(str1);
printf("ENTER THE 2ND  STRING:");
gets(str2);
if(strlen(str1)==strlen(str2))
{
while(str1[i]!='\0')
{
if(str1[i]!=str2[i])
{
k=1;
break;
}
i++;
}
k=0;
}
if(k==0)
printf("BOTH STRING ARE SAME\n");
else
printf("BOTH The STRING ARE NOT SAME\n");
system("pause");
}


