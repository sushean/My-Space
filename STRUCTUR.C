#include<stdio.h>
#include<process.h>
struct stud
{
char nam[30];
int age,roll;
};
void main()
{
struct stud s;
system("cls");
printf("ENTER STUDENT NAME :");
gets(s.nam);
printf("ENTER THE AGE :");
scanf("%d",&s.age);
printf("ENTER THE ROLLNO. :");
scanf("%d",&s.roll);
printf("student's name is:%s\n",s.nam);
printf("student's age is:%d\n",s.age);
printf("student's rollno is:%d\n",s.roll);
system("pause");
}

