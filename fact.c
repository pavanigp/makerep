#include<stdio.h>
#include"fun.h"

int fact(int n)
{
int i,fac=1;
for(i=1;i<=n;i++)
{
fac=fac*i;
}
return fac;
}
