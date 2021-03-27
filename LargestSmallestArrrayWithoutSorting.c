#include<stdio.h>
//GM 27/06/2020
int main()
{
    int arr[]={6,10,677,5,50,3,4,9,8,901,20,69,2,500,880};
    int i,j,LargestNumber=arr[0],SmallestNumber=arr[0],len;
    len=sizeof(arr)/sizeof(arr[0]);
    //len=*(&arr+1); also work using pointer
    printf("Length of array:%d\n",len);

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            //Largest Number
            if(arr[i]>arr[j])
                if(LargestNumber<arr[i])
                    LargestNumber=arr[i];
                else if(LargestNumber<arr[j])
                    LargestNumber=arr[j];
            //Smallest Number
            if(arr[i]<arr[j])
                if(SmallestNumber>arr[i])
                    SmallestNumber=arr[i];
                else if(SmallestNumber>arr[j])
                    SmallestNumber=arr[j];
        }
    }
    printf("The Largest Number is:%d\n",LargestNumber);
    printf("The Smallest Number is:%d",SmallestNumber);

}
