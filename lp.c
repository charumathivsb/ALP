#include<stdio.h>
void main()
{
int yr;
scanf("%d",&yr);
if((yr%400)==0)
{
printf("yes");
}
elseif((yr%100)==0)
{
printf("no");
}
elseif((yr%4)==0)
{
printf("yes");
]
else
{
printf("no");
}
}
