#include"stdio.h"
void main()
{
int n,a[100],i;
printf("nhap n");
scanf("%d",&n);
a[0]=1;
a[1]=1;
for (i=2;i<n;i++)
a[i]=a[i-1]+a[i-2];
for (i=0;i<n;i++)
printf("%d ",a[i]);}
