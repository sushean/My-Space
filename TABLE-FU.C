#include"table.C";
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int num ,lim;
char ch='y';
while(1)
{
  system("cls");
  printf("ENTER THE NUMBER TO GENERATE A TABLE:");
  scanf("%d",&num);
  printf("ENTER THE LIMIT FOR TABLE GENERATION [1 TO 100]:");
  scanf("%d",&lim);
  TABLE(num,lim);
  printf("WANT TO GENERATE MORE TABLE(Y/N):");
  ch=getche();
  if(ch=='n'||ch=='N')
  break;
}
printf("\n");
system("pause");
}