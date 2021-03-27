//GM | 16-03-2021
// 1. write a program to count number of digits of an integer
// 2. write a program to find sum of digit of a number
#include<stdio.h>
int main()
{
    int num,cnt=0,rem,sum=0;
    printf("Enter Number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
        cnt++;
    }
    printf("Number of Digits: %d\n",cnt);
    printf("Sum of Digits: %d\n\n",sum);
    return 0;
}

