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
     for(int j=0;j<n-i-1;j++)
     {
         if(ar[j]>ar[j+1])  //ascending order
         {
           int temp=ar[j];
           ar[j]=ar[j+1];
           ar[j+1]=temp;
         }
     }
  }
  for(int i=0;i<n;i++)
  {
    printf("%d, ",ar[i]);
  }
  printf("\n highest value is: %d",ar[n-1]);

return 0;
}
