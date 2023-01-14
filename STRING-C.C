#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
void main()
{
char str[30];
char ch;
int i=0;
system("cls");
printf("ENTER THE STRING:");
gets(str);
printf("Press l for Lower Case or Press U for Upper Case:");
ch=getche();
switch(ch)
{
 case 'l':

	while(str[i]!='\0')
	{
	 if(str[i] !=32)
	 str[i]=str[i]+32;
	 i++;
	}
	str[i]='\0';
	break;
 case 'U':
	while(str[i]!='\0')
	{
	 if(str[i]!=32)
	 str[i]=str[i]-32;
	 i++;
	}
	str[i]='\0';
	break;
 default:
	printf("Wrong Choice !!!!\n");
}
printf("Converted String is:%s\n",str);
system("pause");
}
