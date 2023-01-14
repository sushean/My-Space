#include<stdio.h>
#include<process.h>
void main()
{
char name[40];
char address[45];
char subjects[60];
char parent[40];
char section;
int cla;
int roll;
system("cls");
printf("ENTRE THE SECTION OF STUDENT-->\n");
scanf("%c",&section);
printf("ENTRE THE NAME OF STUDENT-->\n");
scanf("%s",name);
printf("ENTRE THE ADDRESS OF STUDENT-->\n");
scanf("%s",address);
printf("ENTRE THE SUBJECTS OF STUDENT-->\n");
scanf("%s",subjects);
printf("ENTRE THE NAME OF STUDENT'S PARENT-->\n");
scanf("%s",parent);
printf("ENTRE THE CLASS OF STUDENT-->\n");
scanf("%d",&cla);
printf("ENTRE THE ROLLNO. OF STUDENT-->\n");
scanf("%d",&roll);
printf(" THE DETAILS OF STUDENTS ARE AS FOLLOW----->\n");
printf("==================================================\n");
printf(" NAME OF STUDENT IS      :%s\n",name);
printf(" ADDRESS OF STUDENT IS   :%s\n",address);
printf(" SUBJECTS OF STUDENT ARE :%s\n",subjects);
printf(" NAME OS STUDENT'S PARENT:%s\n",parent);
printf(" SECTION OF STUDENT      :%c\n",section);
printf(" CLASS OF STUDENT        :%d\n",cla);
printf(" ROLLNO. OS STUDENT      :%d\n",roll);
printf("============================================\n");
system("pause");
}



