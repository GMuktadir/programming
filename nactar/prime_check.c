//GM |28-03-2021
//Check prime or not from array
#include<stdio.h>
int prime(int num)
{
    int p=1;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            p=0;
            break;
        }
    }

    if(p==1)
        printf("prime\n");
    else
        printf("Not Prime\n");
}
int main()
{
int num,len,p,arr[10]={2,10,4,5,6,12,23,77,81,97,101};
len=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<len;i++)
{
    printf("%d: ",arr[i]);
    p=prime(arr[i]);
}


return 0;
}
