//Class work
// Check Number is Even or odd also check it is negative or positive
// GM| 13-03-2021
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check even or odd:");
    scanf("%d",&num);
    if(num>0 &&(num%2==0))
     printf("Number is positive and Even");
   else if(num>0 &&(num%2!=0))
        printf("Number is positive and Odd");
    else if(num<0 &&(num%2==0))
        printf("Number is negative and Even");
    else if(num<0 &&(num%2!=0))
        printf("Number is negative and Odd");
    else
        printf("Number is zero");
return 0;
}
