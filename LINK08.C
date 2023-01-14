//linked lists07 JOINING OF TWO LINKED LISTS
#include<stdio.h>
#include<malloc.h>
#include<process.h>
struct node
{
int data;
struct node *link;
};
void main()
{
struct node *temp,*prev,*first=NULL,*second=NULL,*save;
int dat;
system("cls");
printf("ENTER ANY INTEGER FOR 1ST LINKED LIST OR -11 TO EXIT :");
scanf("%d",&dat);
while(dat!=-11)
{
temp=(struct node *) malloc(sizeof(struct node));
temp->data=dat;
temp->link=NULL;
if(first==NULL)
first=temp;
else
prev->link=temp;
prev=temp;
save=temp;
printf("ENTER ANY INTEGER FOR 1ST LINKED LIST OR -11 TO EXIT :");
scanf("%d",&dat);
}
dat=0;
printf("=======================================================\n");
printf("ENTER ANY INTEGER FOR 2ND LINKED LIST OR -11 TO EXIT :");
scanf("%d",&dat);
while(dat!=-11)
{
temp=(struct node *) malloc(sizeof(struct node));
temp->data=dat;
temp->link=NULL;
if(second==NULL)
second=temp;
else
prev->link=temp;
prev=temp;
printf("ENTER ANY INTEGER FOR 2ND LINKED LIST OR -11 TO EXIT :");
scanf("%d",&dat);
}
printf("THE FIRST LINKED LIST IS UNDER-->\n");
printf("START-->");
temp=first;
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->link;
}
printf("END\n");
printf("THE SECOND LINKED LIST IS UNDER-->\n");
printf("START-->");
temp=second;
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->link;
}
printf("END\n");
save->link=second;
printf("LINKED LIST AFTER JOINING IS UNDER-->\n");
printf("START-->");
temp=first;
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->link;
}
printf("END\n");
system("pause");
}