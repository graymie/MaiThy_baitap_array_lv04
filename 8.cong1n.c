#include"stdio.h"
void main()
{
int n,i;
float s;
printf("nhap n");
scanf("%d",&n);
s=0;i=1;
while (i<=n)
{ s= s + (1/(float)i);
i++;}
printf("tong la %f",s);

}
