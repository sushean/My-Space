#include<stdio.h>
#include<process.h>
void main()
{
int num;
system("cls");
printf("ENTRE ANY NUMBER BETWEEN [1-12] TO GET THE NAME OF MONTH\n");
printf("========================================================\n");
scanf("%d",&num);
if (num==1)
	printf("------>JANUARY\n");
	else if(num==2)
		printf("------>FEBRUARY\n");
	else if(num==3)
		printf("------>MARCH\n");
	else if(num==4)
		printf("------>APRIL\n");
	else if(num==5)
		printf("------>MAY\n");
	else if(num==6)
		printf("------>JUNE\n");
	else if(num==7)
		printf("------>JULY\n");
	else if(num==8)
		printf("------>AUGUST\n");
	else if(num==9)
		printf("------>SEPTEMBER\n");
	else if(num==10)
		printf("------>OCTOBER\n");
	else if(num==11)
		printf("------>NOVEMBER\n");
	else if(num==12)
		printf("------>DECEMBER\n");
	else
		printf("ENTRE VALID NUMBER!!!!!!!\n");
system("pause");
}