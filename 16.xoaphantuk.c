#include"stdio.h"
void main()
{
int n,a[100],i,b[100],k,j;
printf("nhap n,k");
scanf("%d%d",&n,&k);

/*nhap mảng a*/
for (i=0;i<n;i++)
{printf("nhap a(%d)\n",i);
scanf("%d",&a[i]);}
j=0;
for (i=0;i<n;i++)
  if(a[i]!=k)
 {b[j]=a[i];
  j++;}

for (i=0;i<j;i++)
    printf("%d",b[i]);}
