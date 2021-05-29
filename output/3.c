#include<stdio.h>
int main()
{
  char c=255;
  printf("%d\n",c);
  c=c+10;  // 265 =100001001=get 8 bit from right=00001001=9(decimal)
  printf("%d",c);
  return 0;
}
