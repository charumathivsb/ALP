#include<stdio.h>
void main()
{
int n, t, s=0;
scanf("%d",&n);
while(n>=1)
{
t=n;
d=t%10;
s=s+d*d*d;
n=t/10;
}
printf("%d",s);
}
