#include<stdio.h>
#include<process.h>
#include<malloc.h>
struct node
{
int data;
struct node *link;
};
void main()
{
struct node *next,*temp,*prev,*current,*first=NULL;
int dat;
system("cls");
printf("ENTER ANY INTEGER OR -11 TO EXIT :");
scanf("%d",&dat);
while(dat!=-11)
{
temp=(struct node*) malloc(sizeof(struct node));
temp->data=dat;
temp->link=NULL;
if(first==NULL)
{
first=temp;
}
else
{
prev->link=temp;
}
prev=temp;
printf("ENTER ANY INTEGRE OR -11 TO EXIT :");
scanf("%d",&dat);
}
prev=NULL;
next=NULL;
printf("START-->");
temp=first;
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->link;
}
printf("END\n");
system("pause");
current=first;
while(current!=NULL)
{
next=current->link;
current->link=prev;
prev=current;
current=next;
}
first=prev;
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

