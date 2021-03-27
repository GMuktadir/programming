#include<stdio.h>
void BubbleSort(int arr[],int n)
{

  for(int i=0;i<n-1;i++)
  {
      for(int j=0;j<n-i-1;j++)
      {
          if(arr[j]>arr[j+1])
          {
              int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
          }

      }
  }
  printf("\n\n===After Sorting====\n");

    for(int i=0;i<n;i++)
       {
            printf("%d,",arr[i]);
       }


}
int main()
{
    int arr[]={45,2,65,1,3,0,-5,-6,-99,-1,1000,66,90,12};
    //printf("How many number do you want to input ?\n");
    //scanf("%d",&n);
   //
   int len=sizeof(arr)/sizeof(arr[0]);
   printf("length of array: %d\n",len);
   printf("===Before Sorting===\n");
   for(int i=0;i<len;i++)
       {
            printf("%d,",arr[i]);
       }
    BubbleSort(arr,len);









return 0;
}
