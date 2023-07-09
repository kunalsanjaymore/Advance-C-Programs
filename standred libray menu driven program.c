#include<stdio.h>

int main()
{
  int ch,k;
  char s1[100],s2[100];
 
do
{
  printf("enter string1:");
  scanf("%s",&s1);
  printf("enter string2:");
 scanf("%s",&s2);

printf("\n1-length \n2-copy \n3-concat \n4-compare");
printf("enter choice");
scanf("%d",&ch);
switch(ch)
{
  case 1:printf("first string is length=%d",strlen(s1));
         printf("second string is length=%d",strlen(s2));
          break;
  case 2:strcpy(s1,s2);
         printf("copy of string=%s",s1);
         break;
 case 3:strcat(s1,s2);
          printf("string is concat=%s",s1);
           break;
 case 4:k=strcmp(s1,s2);
         if(k>0)
       printf("first string is greater=%s",s1);
      else if(k<0)
      printf("second string is greater=%s",s2);
      else
       printf("string is equal");
}
}while(ch>5);
}
    