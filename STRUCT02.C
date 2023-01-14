#include<stdio.h>
#include<process.h>
struct stud
{ char nam[30];
  int roll,age;
}s[4];
void main()
{
int i=0;
system("cls");
for(i=0;i<4;i++)
{
flushall();//buffer data clear
printf("ENTER THE NAME OF STUDENT :");
gets(s[i].nam);
printf("ENTER THE AGE OF STUDENT :");
scanf("%d",&s[i].age);
printf("ENTER THE ROLL NO OF STUDENT :");
scanf("%d",&s[i].roll);
}
for(i=0;i<4;i++)
{
printf("===============================\n");
printf("THE NAME OF STUDENT IS   :%s\n",s[i].nam);
printf("THE AGE  OF STUDENT IS   :%d\n",s[i].age);
printf("THE ROLL NO.OF STUDENT IS:%d\n",s[i].roll);
printf("===============================\n");
}
system("pause");
}
