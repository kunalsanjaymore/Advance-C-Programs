#include<stdio.h>

int main()
{
  char s1[100],s1[100];
  int k;
 printf("enter string 1");
 gets(s1);
 printf("enter string 2");
 gets(s2);

k=strcmp(s1,s2);
 if(k>0)
printf("first string greater");
else if(k<0)
 printf("second string greater");
else
 printf("equal string");
}


