#include<iostream.h>
void main()
{
int n;
scanf("%d",&n);
while(n>0)
{
n=n%10;
printf("%d",n);
n=n/10;
}
}
