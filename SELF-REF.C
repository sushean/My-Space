//self refrential structure(23/11/2022)
#include<stdio.h>
#include<process.h>
struct stud
{ char nam[20];
  int age,roll;
  struct stud *link;
};
void main()
{
struct stud s,s1,s2,s3,*ptr;
gets(s.nam);
s.age=18;
s.roll=101;
gets(s1.nam);
s1.age=24;
s1.roll=102;
gets(s2.nam);
s2.age=40;
s2.roll=103;
gets(s3.nam);
s3.age=16;
s3.roll=104;
s3.link=NULL;
printf("ENTERED VALUE ARE AS UNDER\n");
ptr=&s;
s.link=&s1;
s1.link=&s2;
s2.link=&s3;
while(ptr!=NULL)
{
printf("STUDENT NAME  :%s\n",ptr->nam);
printf("STUDENT AGE   :%d\n",ptr->age);
printf("STUDENT ROLLNO:%d\n",ptr->roll);
printf("\n");
ptr=ptr->link;
}
system("pause");
}