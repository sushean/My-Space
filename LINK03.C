//LINKED LISTS 03 (INSERTION OF NODE AT ANY GIVEN POINT)
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
  struct node *first=NULL,*prev,*temp,*next;
  int dat,loc,x=1;
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
	}
  printf("START-->");
  temp=first;
	while(temp!=NULL)
	{
	 printf("%d-->",temp->data);
	 temp=temp->link;
	}
  printf("END\n");
  printf("ENTER THE LOCATION TO INSERT THE NEW NODE :");
  scanf("%d",&loc);
  printf("ENTER THE INTEGER FOR NEW NODE :");
  scanf("%d",&dat);
  temp=(struct node*) malloc(sizeof(struct node));
  temp->data=dat;
  prev=first;
	if(loc>1)
	{
	  while(x!=loc)
		{
		  next=prev->link;
		  x++;
		   if(x==loc)
		     break;
		  prev=prev->link;
		}
	  temp->link=next;
	  prev->link=temp;
	}
	else
	{
	  temp->link=first;
	  first=temp;
	}
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