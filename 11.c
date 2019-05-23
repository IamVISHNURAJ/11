#include <stdio.h>
int main() 
{
int n,j,v=1;
scanf("%d%d",&n,&j);
for(int i=1;i<=j;i++)
v=v*n;
printf("%d",v);
return 0;
}