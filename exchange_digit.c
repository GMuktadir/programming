#include<stdio.h>
int main()
{
int a=12345,d,r,L,num_digit=0,sum_digit;
while(a!=0)
{
  //d=a/10;
  r=a%10;
  sum_digit+=r;
  a/=10;
  num_digit++;
}
printf("\nsum of digit:%d",sum_digit);
printf("\nNum of digit:%d",num_digit);


  return 0;
}
