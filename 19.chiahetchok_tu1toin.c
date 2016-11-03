#include"stdio.h"
void main()
{
int n,k,i;
printf("nhap n,so bi chia k");
scanf("%d%d",&n,&k);


for (i=0;i<n;i++)
  if((i%k)==0)
    printf("%d",i);}
