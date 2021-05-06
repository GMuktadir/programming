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
     if(ar[i]%2==0)
      {
        printf("%d: is even\n",ar[i]);
      }
  }

  return 0;
}
