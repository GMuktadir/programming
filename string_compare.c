#include<stdio.h>
int main()
{
  char st1[20];
  char st2[20];
  printf("String 1: ");
  gets(st1);
  printf("String 2: ");
  gets(st2);
  int len1=strlen(st1);
  int len2=strlen(st2);
  int f=0;
  for(int i=0;i<len1;i++)
  {
      if(st1[i]!=st2[i])
      {
        f=1;
        break;
      }
  }
  if(f==0)
    printf(" %s == %s is equal",st1,st2);
  else
    printf(" %s != %s is not equal",st1,st2);
  return 0;
}
