#include"stdio.h"
void main()
{
int a[100],b[100],n,m,i,c[100],j,sx;
printf("nhap n,m");
scanf("%d%d",&n,&m);
/*nhap mảng a*/
for (i=0;i<n;i++)
{printf("nhap a(%d)\n",i);
scanf("%d",&a[i]);}
/*nhập mảng b*/
for (i=0;i<m;i++)
{printf("nhap b(%d)\n",i);
scanf("%d",&b[i]);}
/*dồn vào mảng 1 mảng a*/
for (i=0;i<m;i++)
{a[n]=b[i];
n++;}
for (i=0;i<n+m;i++)
for(j=i+1;j<n+m;j++)
    if(a[i]>a[j])
{sx=a[i];
a[i]=a[j];
a[j]=sx;

}
for (i=0;i<n;i++)
printf("%d\n",a[i]);
}
