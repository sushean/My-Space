//DYNAMIC LINKEDLIST IN C
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
struct node *first=NULL,*temp,*prev;
int dat;
printf("ENTER ANY INTEGER VALUE OR -11 TO EXIT :");
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
printf("ENTER ANY INTEGER VALUE OR -11 TO EXIT :");
scanf("%d",&dat);
}
printf("LINKED LIST IS UNDER\n");
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
