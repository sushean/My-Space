#include<stdio.h>
#include<process.h>
void main()
{char nam[30];
char adress[50];
char sec;
int roll;
char par[30];
system("cls");
printf("ENTRE THE SECTION OF STUDENT\n");
scanf("%c",&sec);
printf("ENTRE THE NAME OF STUDENT\n");
scanf("%s",nam);
printf("ENTRE THE ADRESS OF STUDENT\n");
scanf("%s",adress);
printf("ENTRE THE NAME OF STUDENTS PARENTS\n");
scanf("%s",par);
printf("ENTRE THE ROLL NUMBER OF STUDENT\n");
scanf("%d",&roll);
printf("Studentt Details are as under\n");
printf("=============================\n");
printf("THE NAME OF STUDENT :%s\n",nam);
printf("Student PArentage is:%s\n",par);
printf("Student Address iss:%s\n",adress);
printf("Student Roll NNo is:%d\n",roll);
printf("Student Section is:%c\n",sec);
printf("=============================\n");
system("pause");
}
