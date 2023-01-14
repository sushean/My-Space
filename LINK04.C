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
  struct node *first=NULL,*prev,*temp,*second;
  int dat,loc,pos=1,flag=1,ctr=1;
  system("cls");
  printf("ENTER ANY INTEGER VALUE OR -11 TO EXIT :");
  scanf("%d",&dat);
	while(dat!=-11)
	{
	 temp=(struct node*) malloc(sizeof(struct node));
	 temp->data=dat;
	 temp->link=NULL;
	  if(first==NULL)
	    first=temp;
	  else
	    prev->link=temp;
	 prev=temp;
	 printf("ENTER ANY INTEGER VALUE OR -11 TO EXIT :");
	 scanf("%d",&dat);
	 ctr++;
	}
  printf("START-->");
  temp=first;
	while(temp!=NULL)
	{
	 printf("%d-->",temp->data);
	 temp=temp->link;
	}
  printf("END\n");
  printf("ENTER VALUE FOR NEW NODE FOR INSERTION :");
  scanf("%d",&dat);
  temp=(struct node*) malloc(sizeof(struct node));
  temp->data=dat;
  temp->link=NULL;
  printf("ENTER THE LOCATION FOR INSERTION :");
  scanf("%d",&loc);
  if(loc<ctr+1)
  {
  if(loc==1)
  {
	temp->link=first;
	first=temp;
  }
  else
  {
	prev=first;
	while(prev!=NULL)
	{
	prev=prev->link;
	pos++;
	if(pos==loc)
	{
		flag=0;
		break;
	}
  second=prev;
  }
  if(flag==0)
  {
  second->link=temp;
  temp->link=prev;
  }
  }
  temp=first;
  printf("START-->");
  while(temp!=NULL)
  {
  printf("%d-->",temp->data);
  temp=temp->link;
  }
  printf("END\n");
  }
  else
  printf("ENTER VALID LOCTION!!!!\n");
  system("pause");
  }



