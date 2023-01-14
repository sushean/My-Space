#include<stdio.h>
#include<process.h>
#include<malloc.h>
struct node
{
int data;
struct node *link;
};
void create(struct node **f);
void disp(struct node *d);
void main()
{
int dat;
struct node *first=NULL;
system("cls");
create(&first);
disp(first);
system("pause");
}
void create(struct node **f)
{
struct node *temp,*prev;
int dat;
printf("ENTER ANY INTEGRE VALUE OR -111 TO EXIT :");
scanf("%d",&dat);
while(dat!=-111)
{
temp=(struct node *) malloc(sizeof(struct node));
temp->data=dat;
temp->link=NULL;
if(*f==NULL)
*f=temp;
else
prev->link=temp;
prev=temp;
printf("ENTER ANY INTEGER VALUE OR -111 TO EXIT :");
scanf("%d",&dat);
}
}
void disp(struct node *temp)
{
 printf("START-->");
 while(temp!=NULL)
 {
 printf("%d-->",temp->data);
 temp=temp->link;
 }
 printf("END\n");
 }