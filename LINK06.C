//link list singly ciruclar
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
struct node *prev,*first=NULL,*temp;
int dat;
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
printf("ENTER ANY INTEGER OR -11 TO EXIT :");
scanf("%d",&dat);
}
temp->link=first;
temp=first;
printf("START-->");
while(temp)//while true
{
 printf("%d-->",temp->data);
 temp=temp->link;
 if(temp==first)
 break;

}
printf("END\n");
system("pause");
}

