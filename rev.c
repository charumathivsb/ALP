#include<iostream.h>
void main()
{
int n;
cin>>n;
while(n>0)
{
n=n%10;
cout<<n;
n=n/10;
}
}
