#include<stdio.h>
 
struct student 
{
  int rno;
  char name[20];
  float per;
  char class[20];
}s1[100];

 int main()
{
  int i,n,flag=0;
  char name[20];
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
 printf("enter rno name per class");
 scanf("%d%s%f%s",&s1[i].rno,&s1[i].name,&s1[i].per,&s1[i].class);
 }
printf("enter name to search");
 scanf("%s",&name);

for(i=0;i<n;i++)
{
 if(strcmp(s1[i].name,name)==0)
 {
   flag=1;
   break;
}
}
if(flag==1)
{
 printf("\nrecord is found");
 printf("\nroll no=%d",s1[i].rno);
 printf("\nname=%s",s1[i].name);
 printf("\npercentage=%f",s1[i].per);
 printf("\nclass=%s",s1[i].class);
}
else
{
  printf("record is not found");
}
}
