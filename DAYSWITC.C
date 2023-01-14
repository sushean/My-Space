#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int day;
system("cls");
printf("ENTRE ANY INT. BETWEEN [1-7] TO GET THE NAME OF DAY\n");
printf("======================================================\n");
scanf("%d",&day);
switch(day)
{
case 1:printf("MONDAY\n");
       break;
case 2:printf("TUESDAY\n");
       break;
case 3:printf("WEDNESDAY\n");
       break;
case 4:printf("THRUSDAY\n");
       break;
case 5:printf("FRIDAY\n");
       break;
case 6:printf("SATURDAY\n");
       break;
case 7:printf("SUNDAY\n");
       break;
default:printf("WRONG NUMBER!\nENTRE ANY NUMBER BETWEEN [1-7]\n");
}
system("pause");
}
