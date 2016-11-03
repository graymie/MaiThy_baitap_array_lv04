#include"stdio.h"
void main()
{
int a[100],i,n,b[100],j,c[100],k,m;
printf("nhap n");
scanf("%d",&n);

/*nhap mảng a*/
for (i=0;i<n;i++)
{printf("nhap a(%d)\n",i);
scanf("%d",&a[i]);}
j=0;k=0;
for (i=0;i<n;i++)
    {if(a[i]<0)
    {b[j]=a[i];
    j++;}
    else
    {
        c[k]=a[i];
        k++;
    }}
    for(i=0;i<j;i++)
    for(n=i+1;n<j;n++)
      if(b[i]>b[n])

    { m=b[i];
    b[i]=b[n];
    b[n]=m;}
    for(i=0;i<k;i++)
    for(n=i+1;n<k;n++)
      if(c[i]>c[n])
    { m=c[i];
    c[i]=c[n];
    c[n]=m;}

    printf("mang am ");
    for (i=0;i<j;i++)
   {printf(" %d\n",b[i]);}
   printf("mang duong\n ");
    for (i=0;i<k;i++)
    {printf("%d ",c[i]);}}
