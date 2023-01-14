#include<stdio.h>
#include<process.h>
void main()
{
int x=10,y=15,z=2,a=0;
system("cls");
if(z<y)
	a=(x>y)?x:y;
else
	a=(z>x)?z:x;
printf("==================================\n");
printf("THE VALUE OF GREATEST NO. IS:%d\n",a);
printf("==================================\n");
system("pause");
}