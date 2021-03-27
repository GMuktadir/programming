
//GM|11-03-2021
//
//Total array operation
//
#include<stdio.h>
#include<math.h>
#define MAX 50
void DISPLAY(double arr[],int len);

void INSERT(double *arr,int len);
void INSERT_POSITION(double *arr,int len);
int SEARCH(double arr[],int len);
void DELETE(double *arr,int len);
int SD(double *arr,int len);

int main()
{
    int num,menu,check;
    double arr[]={56.0,37.2,34.0,99.0,37.0,49.0,78.0,88.0};
    //int arr[]={56,34,99,37,49,78,88};
    int len=sizeof(arr)/sizeof(arr[0]);

    printf("\narray length:%d\n",len);
    DISPLAY(arr,len);
    printf("\n====Functions====\n");
    printf("1.INSERT\n");
    printf("2.INSERT POSITION\n");
    printf("3.SEARCH\n");
    printf("4.DELETE\n");
    printf("5.Standard Deviation\n");
    M:
    printf("Press Menu\n");
    scanf("%d",&menu);
    switch(menu)
    {
    case 1:
        //Insert element
        INSERT(&arr,len);  // call function
        break;
    case 2:
        //Insert value in given position
        INSERT_POSITION(&arr,len);
        break;
    case 3:
        //search a value from the array
        check=SEARCH(arr,len);
        //printf("Value of check var:%d\n",check);
        if(check!=-1)
            printf("\nFound the value in the location:%d\n",check+1);
        else
            printf("\nNot Found! the value in the array\n");
        break;
    case 4:
        //search a value from the array
        DELETE(&arr,len);
        break;
    case 5:
        //Standard deviation
        SD(&arr,len);
        break;
    default:
        printf("==> Error| Please select valid menu number\n");
        goto M;
    }


return 0;
}
void DISPLAY(double arr[],int len)
{
    printf("\n==Resultant array is below==\n");
    printf("\n#####################Resultant array##############################################\n");
    for(int i=0;i<len;i++)
    {
        printf("[%d], ",i);
    }
    printf("\n");
    for(int i=0;i<len;i++)
    {
        printf("%0.2lf,  ",arr[i]);
    }

    printf("\n##################################################################################\n");

}
void INSERT(double *arr,int len)
{
    double new_element;
    printf("Enter New Element to add item at the last position in an array:");
    scanf("%lf",&new_element);
    arr[len]=new_element;
    printf("Added %0.2lf in the array(..)\n",new_element);

    //Not called DISPLAY() function otherwise last element doesn't show in array
    printf("\n==Resultant array is below==\n");
    printf("\n#####################Resultant array##############################################\n");
    for(int i=0;i<=len;i++)    // DISPLAY() use  i<len
    {
        printf("[%d], ",i);
    }
    printf("\n");
    for(int i=0;i<=len;i++)   // DISPLAY() use  i<len
    {
        printf("%0.2lf,  ",arr[i]);
    }
    printf("\n##################################################################################\n");

}
void INSERT_POSITION(double *arr,int len)
{
    int pos;
    double new_element;
    printf("\nEnter location of the array:");
    scanf("%d",&pos);

    printf("Enter New Element:");
    scanf("%lf",&new_element);

    for(int i=len-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=new_element;
    DISPLAY(arr,len);
}
void BubbleSort(double arr[],int len)
{
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1])
            {
                double temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
}
int SEARCH(double arr[],int len)
{
    double val;
    int low=0,high=len-1,index;
    //binary search required sorted array
    BubbleSort(arr,len);
    printf("\nAfter sorting\n:");
    DISPLAY(arr,len);

    printf("\nEnter a value to search in array:");
    scanf("%lf",&val);
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==val)
            return mid;

        if(arr[mid]<val)
            low=mid+1;
        else
            high=mid-1;

    }

return -1;
}
void DELETE(double *arr,int len)
{
    //show first the array
    DISPLAY(arr,len);
    double num;
    int i,j;
    printf("Enter a number to delete: ");
    scanf("%lf",&num);
    for(i=0;i<len;i++)
    {
        if(arr[i]==num)
            break;
    }
    if(i<len)
    {
        num=num-1;
        for(int j=i;j<num;j++)
        {
            arr[j]=arr[j+1];
        }
    }

    DISPLAY(arr,len);

}
int SD(double *arr,int len)
{
    double mean=0,sum=0,sum2=0,sd=0;
    for(int i=0;i<len;i++)
        sum+=arr[i];
    mean=sum/len;
    for(int j=0;j<len;j++)
    {
        sum2+=pow(mean-arr[j],2);
        sd=sqrt(sum2/len);
    }
    printf("Standard Deviation: %0.2lf",sd);
}

