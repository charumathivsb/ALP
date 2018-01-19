#include<stdio.h>
void main()
{
int b, e;
long long p=1;
int i;
scanf("%d",&b);
scanf("%d",&e);
for(i=1;i<=e;i++)
{
p=p*b;
}
printf("%d",p);
}
