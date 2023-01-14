#include<stdio.h>
#include<process.h>
void main()
{
int num1;
system("cls");
printf("ENTER ANY INTEGER VALUE BETWEEN [1-7]:");
scanf("%d",&num1);
if(num1==1)
printf("MONDAY\n");
else if(num1==2)
printf("TUESDAY\n");
else if(num1==3)
printf("WEDNESDAY\n");
else if(num1==4)
printf("THRUSDAY\n");
else if(num1==5)
printf("FRIDAY\n");
else if(num1==6)
printf("SATURDAY\n");
else if(num1==7)
printf("SUNDAY\n");
else
printf("ENTRE NUMBER BETWEEN [1-7]\n");
system("pause");
}