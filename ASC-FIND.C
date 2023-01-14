#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int i=0,j,x,arr[5];
system("cls");
while(i<5)
	{
	printf("ENTER ANY INTEGER VALUE\n");
	scanf("%d",&arr[i]);
	i++;
	}
for(i=0;i<5;i++)
      {
	for(j=i+1;j<5;j++)
	{
		if(arr[i]>arr[j])
	       {
		x=arr[i];
		arr[i]=arr[j];
		arr[j]=x;
		}
	}
}
	for(i=0;i<5;i++)
	{
	printf("%2d",arr[i]);
	}

system("pause");
}


