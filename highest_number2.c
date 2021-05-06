#include<stdio.h>
int main()
{
  int n,ar[20];
  printf("How many number do you want to input?: ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);

  }
  for(int i=0;i<n;i++)
  {
    if(ar[0]<ar[i])
    {
      ar[0]=ar[i];   //easy technique to find largest value
    }
  }
  printf("Highest value is : %d",ar[0]);

return 0;
}
