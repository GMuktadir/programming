//GM | 11-03-2021
//Compare among three number using if else statement
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter Number 1:");
    scanf("%d",&num1);
    printf("Enter Number 2:");
    scanf("%d",&num2);
    printf("Enter Number 3:");
    scanf("%d",&num3);

    //find the largest number logic
    if(num1>=num2 && num1>=num3)
    {
        if(num2>=num3)
            printf("\n%d is the second largest number\n",num2);
    }
    else if(num2>=num3 && num2>=num1)
    {
        if(num1>=num3)
            printf("\n%d is the second largest number\n",num1);
        else
            printf("\n%d is the second largest number\n",num3);
    }
    else // num3 is the largest
    {
        if(num1>=num2)
            printf("\n%d is the second largest number\n",num1);
        else
            printf("\n%d is the second largest number\n",num2);

    }


 return 0;
}
