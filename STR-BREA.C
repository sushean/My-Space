#include< stdio.h>
#include<process.h>
#include<conio.h>
#include<string.h>
void main()
{
int i=0,j=0;
char str1[50],str2[50];
system("cls");
printf("ENTER THE STRING :");
gets(str1);
while(str1[i]!=' ')
	{
	 i++;
	}
str1[i]='\0';
i++;
while(str1[i]!='\0')
	{
	 str2[j]=str1[i];
	 j++;
	 i++;
	}
str2[j]='\0';
printf("===================\n");
printf("---->%s\n---->%s\n",str1,str2);
printf("===================\n");
system("pause");
}