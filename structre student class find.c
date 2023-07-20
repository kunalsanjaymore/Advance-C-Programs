#include<stdio.h>
 
struct student
{
 int rno;
 char name [20];
 float per;
 char class[20];
}s1[100];

 int main()
{
 int i,n;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
  printf("enter rno name per class");
  scanf("%d%s%f%s",&s1[i].rno,&s1[i].name,&s1[i].per,&s1[i].class);
}
for(i=0;i<n;i++)
{
 if(strcmp(s1[i].class,"sy")==0)
{
  printf("\nroll no=%d",s1[i].rno);
  printf("\nname=%d",s1[i].name);
  printf("\npercentage=%d",s1[i].per);
  printf("\nclass=%d",s1[i].class);
}
}
}
