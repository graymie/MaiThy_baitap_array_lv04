#include"stdio.h"
void main()
{
int n,a[100],i,b[100],k,j,m;
printf("nhap n");
scanf("%d",&n);

/*nhap mảng a*/
for (i=0;i<n;i++)
{printf("nhap a(%d)\n",i);
scanf("%d",&a[i]);}
k=0;
for (i=0;i<n;i++)
  if(a[i]>0)
 {b[k]=a[i];
  k++;}
for(i=0;i<k;i++)
for(j=i+1;j<k;j++)
if (b[i]>b[j])
{m=b[i];
b[i]=b[j];
b[j]=m ;}

for (i=0;i<k;i++)
    printf("%d ",b[i]);}
