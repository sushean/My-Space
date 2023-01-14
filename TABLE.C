#include<stdio.h>
void TABLE(int x,int y)
{
int i;
for(i=1;i<=y;i++)
{
  printf("%d x %d = %d\n",x,y,x*i);
}
}