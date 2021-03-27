//GM | 16-03-2021
// write a program to print all odd numbers from 1 to n
#include<stdio.h>
int main()
{
    int n,cnt=0;
    printf("Enter a number of the last range:");
    scanf("%d",&n);
    printf("\n==Odd Numbers(From 1 to %d )==\n",n);
    for(int i=0;i<n;i++)
        if(i%2!=0)
        {
            printf("%d,",i);
            cnt++;
        }
    printf("\nTotal Odd numbers: %d",cnt);


    return 0;
}
