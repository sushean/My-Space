#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
long int b,x,y,a=0,z=0;
system("cls");
printf("ENTRE ANY INTEGER VALUE\n");
scanf("%ld",&x);
while(x>0)
{
	y=x%10;
	x=x/10;
	if(y%2==0)
	z=z*10+y;
	else if(y%2!=0)
	a=a*10+y;
}
x=0;b=0;
while(a>0)
{
	y=a%10;
	x=x*10+y;
	a=a/10;
	y=z%10;
	if(y!=0)
	b=b*10+y;
	z=z/10;
	}

printf("THE EVEN SPLIT IS:%ld\n",b);
printf("THE ODD SPLIT IS :%ld\n",x);
system("pause");
}

