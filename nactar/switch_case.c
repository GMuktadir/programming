//GM| 15-03-2021
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number to check positive or negative:");
    scanf("%d",&num);

    switch(num%2)
    {
    case 0:
        printf("Number is Even\n");
        break;
    case 1:
        printf("Number is Odd\n");
        break;
    default:
        printf("Please Enter Numeric Value\n");
    }
return 0;
}
