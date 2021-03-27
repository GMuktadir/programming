//GM | 15-03-2021
// Write a program sum of natural number
#include<stdio.h>
int main()
{
  int num,sum=0;
  printf("Enter a number to find out sum of natural number:");
  scanf("%d",&num);
  sum=num*(num+1)/2;
  printf("Summation: %d\n\n",sum);

return 0;
}
