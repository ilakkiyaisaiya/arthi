#include<stdio.h>
#include<string.h>
int main()
{
int i,count=0,n;
char a[90]="ilakkiya";
n=strlen(a);
for(i=0;i<=n;i++)
{
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
   count++;
}
if(count>0)
{
printf("yes");
}
    else
{    
printf("no");
}
return 0;
}


