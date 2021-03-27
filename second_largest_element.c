#include<stdio.h>
void SwapNumber(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int a[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                SwapNumber(&a[j],&a[j+1]);
            }

        }
    }

}
int main()
{
    int n,a[100];
    printf("How many number input? :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      printf("Enter elements: %d: ",i);
      scanf("%d",&a[i]);
    }

    bubbleSort(a,n);
     //show the array
    printf("Elements are:\n======================\n");
    for(int i=0;i<n;i++)
    {

      printf("%d, ",a[i]);
    }
     printf("\nThe second largest element is: ");
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]!=a[n-1])
        {
            printf("%d ",a[i]);
            return;
        }


    }
    return 0;
}
