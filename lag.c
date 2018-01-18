#include<iostream.h>
void main()
{
clrscr();
int a, b, c;
cin>>a;
cin>>b;
cin>>c;
if((a >= b) && (a >= c))
{
cout<<a;
}
else if((b >= a) && (b >= c))
{
cout<<b;
}
else
{
cout<<c;
}
}
