//GM | 1-04-2021
//Pointer and array
//sum of array
#include<stdio.h>

int main()
{
    //Declaration method 1
    int x[5],sum=0;
    printf("Enter Five Number:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",x+i);
    sum+=*(x+i);
    }
    printf("Sum=%d",sum);


    return 0;
}
