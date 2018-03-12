#include<stdio.h>
#include<string.h>
void main()
{
	char b[10],count,i;
	printf("enter the numbers");
		scanf("%s",&b);
		for(i=0;i<b[i];i++)
		{
	if((b[i]=='1')||(b[i]=='0'))
	{
		count=1;
	}
	else
	{
	    count=0;
	}
		}
	if(count==1)
	{
		printf("binary values representation");
	}
	else
	{
		printf("not a binary value represendation");
	}
	return 0;
}

