#include"ADDFUN.C";
#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
int num1,num2,sum;
char ch='Y';
while (1)
{
  system("cls");
  printf("ENTER THE 1ST NUMBER TO ADD:");
  scanf("%d",&num1);
  printf("ENTER THE 2ND NUMBER TO ADD:");
  scanf("%d",&num2);
  add(num1,num2);
  printf("WANT TO ADD MORE NUMBERS:[Y/N]");
  ch=getche();
  if(ch=='n'||ch=='N')
  break;
}
system("pause");
return 0;
}
