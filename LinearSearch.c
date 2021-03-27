#include<stdio.h>
int LinearSearch(double arr[],int i,int len,double val)
{
    //recursive way

        if(i>len)
            return 0;
        if(arr[i]==val)
            return i;
        if(arr[len]==val)
            return len;

        return LinearSearch(arr,i+1,len-1,val);

}
int main()
{
    double arr[]={45.43,22.4,55.5,22.9,67.2};
    double val;
    int c;
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("Size of array:%d\n",len);
    printf("Enter a number for searching:");
    scanf("%lf",&val);
    c=LinearSearch(arr,0,len-1,val);
    if(c!=0)
        printf("Found in the position: %d\n",c+1);
    else
        printf("Not Found!\n");
    return 0;
}

//int LinearSearch(double *arr,int len,double val)
//{
//    for(int i=0;i<len;i++)
 //   {
//        if(arr[i]==val)
//           return i;
//    }
 //   return 0;
//}
