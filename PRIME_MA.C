#include<stdio.h>
#include<process.h>
void main()
{
int i,j,n,c,a=0;
system("cls");
printf("ENTER THE NUMBER TILL YOU WANT THE PRIME NO'S. :");
scanf("%d",&n);
if(n>1)
{
for(i=2;i<=n;i++)
{
	c=0;
	for(j=1;j<=i;j++)
	{
	if(i%j==0)
	{
	c++;
	}
	}
	if(c==2)
	{
	printf("%5d",i);
	a++;
	}
	if(a==3)
	{
	printf("\n");
	a=0;
	}
}
}
else
printf("2");
printf("\n");
system("pause");
}
