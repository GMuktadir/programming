//GM | 16-03-2021
// write a program input in array and print in reverse order
#include<stdio.h>
int main()
{
    int arr[30],num;
    printf("How many number do you want to input? :");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        printf("arr[%d]= ",i+1);
        scanf("%d",&arr[i]);
    }
    //show in reverse order
    printf("===\n\n Reverse Order\n\n===");
    for(int i=num-1;i>=0;i--)
    {
        printf("%d, ",arr[i]);
    }
    return 0;
}
