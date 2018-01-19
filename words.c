#include<stdio.h>
void main()
{
char a[32];
int c=0, i;
gets(a);
for(i=0;a[i]!='\o';i++)
{
if(a[i]==' ')
c++;
}
printf("%d",c+1);
}
}
