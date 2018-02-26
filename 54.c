
#include<stdio.h>
void main()
{
int number;
printf("\n enter a number");
scanf("%d",&number);
if(number%2==0)
{
printf("even:%d",number);
}
else
{
printf

("the nearest even no is %d",number-1);
}
}
