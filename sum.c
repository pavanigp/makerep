#include<stdio.h>
#include"fun.h"
//#include"rev.h"

int main()
{
int n1,n2,fac,rev;
printf("enter two numbers:");
scanf("%d %d",&n1,&n2);
int add=n1+n2;
//printf("Sum ::%d\n",add);
fac=fact(add);
printf("factorial :::  %d\n",fac);
rev=reverse(fac);
printf("reverse :::  %d\n",rev);
}

