#include"stdio.h"
void main()
{
int n,i,j,a[100],m;

printf("nhap n");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("nhap mang a %d",i);
scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
 { for(j=i+1;j<n;j++)

   {  if(a[i]>a[j])

    { m=a[i];
    a[i]=a[j];
    a[i]=m;
     }}}
    for(i=0;i<n;i++)
{ printf("%d",a[i]); } }

