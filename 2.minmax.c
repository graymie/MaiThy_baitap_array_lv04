#include"stdio.h"
void main()
{
int a[100],i,min,max,n;
printf("nhap n");
scanf("%d",&n);

/*nhap mảng a*/
for (i=0;i<n;i++)
{printf("nhap a(%d)\n",i);
scanf("%d",&a[i]);}
min=a[0];max=a[0];
for (i=0;i<n;i++)
{if(min>a[i])
{min=a[i];}
if(max<a[i])
{max=a[i];}}
printf("min=%d, max=%d",min,max);}
