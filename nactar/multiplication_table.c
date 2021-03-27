//GM | 15-03-2021
// Write a program for multiplication table
#include<stdio.h>
int main()
{
    int num,m;
    printf("Enter Number:");
    scanf("%d",&num);
    printf("\n==Multiplication Table[For %d]==\n",num);
    for(int i=1;i<=10;i++)
    {
        m=num*i;
        printf("%d X %d= %d\n",num,i,m);
    }
return 0;
}
