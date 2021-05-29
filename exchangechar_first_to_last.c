#include<stdio.h>
int main()
{
  char st[50]="Bangladesh";
  int len=strlen(st);
  printf("\nLength of string: %d",len);

    char c=st[0];
    st[0]=st[len-1];
    st[len-1]=c;

  printf("\nOutput\n=========\n");
  printf(st);
  return 0;
}

