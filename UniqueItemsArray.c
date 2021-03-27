#include<stdio.h>
//GM 27/06/2020
int main()
{
    int arr[]={6,10,677,5,50,3,4,9,8,901,20,69,2,5,500,880};
    int len=sizeof(arr)/sizeof(arr[0]);
    int flag[16]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int UniqueItem=0;

    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i]==arr[j])
                flag[i]=0;
        }

    }
    printf("\nThe Unique Items From Array:");
    for(int z=0;z<len;z++)
    {
        if(flag[z]==1)
        {
            printf("%d,",arr[z]);
            UniqueItem++;
        }

    }
    printf("\nTotal Unique Items of the array: %d",UniqueItem);
}
