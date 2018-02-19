#include<stdio.h>
void main()
{
int a[10],i,n;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
n=a[0];
for(i=0;i<10;i++)
{
if (n<a[i])
n=a[i];
}
printf("The largest number is : %d",n);
}



