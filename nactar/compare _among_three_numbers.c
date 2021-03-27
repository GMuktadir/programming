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
    if(num1>num2)
    {
        if(num1>num3)
            printf("\nNumber 1(%d) is largest number\n",num1);
        else
            printf("\nNumber 3(%d) is largest number\n",num3);
    }
    else
    {
        if(num2>num3)
            printf("\nNumber 2(%d) is largest number\n",num2);
        else
            printf("\nNumber 3(%d) is largest number\n",num3);
    }


 return 0;
}
