#include<stdio.h>
 
 int main()
{
  int a[100],i,n,s=0;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter nos");
 for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
   s=s+a[i];
}
 printf("\n sum of array element=%d",s);
}