#include"stdio.h"
void main()
{
int i,n,a[100],s;
printf("nhap n");
scanf("%d",&n);
s=0;
for(i=0;i<n;i++)
{printf("nhap %d\n",i);
scanf("%d",&a[i]);}
for (i=0;i<n;i++)
s= s+a[i];
printf("tong %d",s);}
