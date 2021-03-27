#include<stdio.h>
int main()
{
  int x=24,y=39,z=45;
  z=x+y;
  y=z-y;
  x=z-y;
  printf("\n%d%d%d",x,y,z);

  int c=2^3;
  printf("\n2^3=%d",c);

  unsigned int a=10;
  a=~a;
  printf("\na=~a=%d",a);

  int b=2;
  if(b>>1)
    printf("\n b>>1=%d",b);

  printf("\n%2d",5067);
}
