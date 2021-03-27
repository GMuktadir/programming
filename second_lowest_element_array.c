#include<stdio.h>
void bubbleSort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                 temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
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
     printf("The second lowest element is: ");
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=a[i+1])
        {
            printf("%d ",a[i]);
            return;
        }


    }
    return 0;
}
