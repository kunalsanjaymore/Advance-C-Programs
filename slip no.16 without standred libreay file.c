#include<stdio.h>
#include<string.h>
int main()
{
  void length (char s1[100],char s2[100]);
  void copy(char s1[100],char s2[100]);
  void uper(char s1[100],char s2[100]);

  char s1[100],s2[100];
  printf("enter two string");
  scanf("%d%d",&s1,&s2);
  length(s1,s2);
  copy(s1,s2);
  upper(s1,s2);
 }
 void length(char s1[100],char s2[100]);
 {
   int i,j;
   for(i=0;s1[i]!='\0';i++);
   for(j=0;s2[j]!='\0';j++);

  printf("length of first string=%d",i);
 printf("length of second string=%d",j);
}
void copy(char s1[100],char s2[100]);
{
  int i,j;
  for(i=0;s1[i]!='\0';i++);
   for(j=0;s2[j]!='\0';j++);
 {
  {
    s1[i]=s2[j];
}
}
 s1[i]='\0';
 printf("first string=%s",s1);
 printf("second string=%s",s2);
}

 void upper(char s1[100],char s2[100]);
{
  int i,j;
  for(i=0;s1[i]!='\0';i++)
{
  if(s1[i]>='a'&&s1[i]<='z')
   s1[i]=s1[i]-32;
{
  for(j=0;s2[j]!='\0';j++)
{
 if(s2[j]>='a'&&s2[j]<='z')
  s2[j]=s2[j]-32;
}
printf("first string upper=%s",s1);
printf("second string upper=%s",s2);
}
