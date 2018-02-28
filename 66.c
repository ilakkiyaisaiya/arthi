
#include<stdio.h>
void main()
{
int a,i,s=0;
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if(a%i==0)
s++;
}
if(s==1)
printf("prime");
else
printf("Non prime");
}
