#include<stdio.h>
int main()
{
    char a;
    int b;
    printf("enter the string \n");
    scanf("%s%d",&a,&b);
    if((a>'a')&&(a<'z')||(a>'A')&&(a<'Z')||(b>1)&&(b<1000))
    {
        printf("yes \n");
    }
    else
    {
        printf("no \n");
    }
    return0;
   } 
