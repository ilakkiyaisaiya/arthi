#include<stdio.h>
void main()
{
  int t,x=2,y=3;
  t=x;
  x=y;
  y=t;
  printf("%d%d",x,y);
}
