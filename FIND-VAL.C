#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i=0,x,arr[5],flag=0;
while(i<5)
	{
	printf("ENTER ANY INTEGER VALUE\n");
	scanf("%d",&arr[i]);
	i++;
	}
printf("ENTER THE VALUE TO FIND IN ARRY\n");
scanf("%d",&x);
for(i=0;i<5;i++)
	{
	if(x==arr[i])
		{
		printf("THE ENTERED VALUE IS:%4d AND IT IS SAVED AT ARRY[%d]\n",x,i+1);
		flag=1;
		break;
		}
	}
if(flag==0)
{
printf("THE ENTERED VALUE DOESN'T EXIST IN THE ARRY\n");
}
system("pause");
}


