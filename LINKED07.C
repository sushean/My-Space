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
struct node *first=NULL,*prev,*second,*temp;
int dat,pos=1,ctr=0;
system("cls");
printf("ENTER ANY INTEGER OR -11 TO EXIT :");
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
	printf("ENTER ANY INTEGER OR -11 TO EXIT :");
	scanf("%d",&dat);
	ctr++;
}
printf("\n");
printf("====================================\n");
printf("LINKED LIST IS UNDER --->\n");
printf("START-->");
temp=first;
while(temp!=NULL)
	{
	printf("%d-->",temp->data);
	temp=temp->link;
	}
printf("END\n");printf("\n");
printf("========================================================\n");
printf("ENTER THE LOCATION FROM WHERE TO BREAK THE LINKED LIST :");
scanf("%d",&dat);
if(dat<=ctr)
{
prev=first;
while(prev!=NULL)
{
	prev=prev->link;
	pos++;
	if(pos==dat)
	break;
	second=prev;
}
second->link=NULL;
printf("\n");
printf("====================================\n");
printf("1ST LINKED LIST IS UNDER -->\n");
printf("\n");
printf("START-->");
temp=first;
while(temp!=NULL)
{
	printf("%d-->",temp->data);
	temp=temp->link;
}
printf("END\n");
printf("\n");
printf("====================================\n");
printf("2ND LINKED LIST IS UNDER -->\n");
printf("\n");
printf("START-->");
temp=prev;
while(temp!=NULL)
{
	printf("%d-->",temp->data);
	temp=temp->link;
}
printf("END\n");
}
else
printf("ENTER VALID LOCATION !!\a\n");
system("pause");
}

