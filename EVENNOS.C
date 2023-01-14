#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
int z=1;
system("cls");
while(z<=100)
{
	if(z%2==0)
	printf("%4d",z);
	z++;

}
system("pause");
}