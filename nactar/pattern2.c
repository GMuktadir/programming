//GM | 16-03-2021
// write a program to show a pattern like below
// INPUT:5
//11111
//00000
//11111
//00000
//11111
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    for(int i=0;i<num;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<num;j++)
            {
                printf("%d",1);
            }
            printf("\n");
        }
        else
        {
            for(int j=0;j<num;j++)
            {
                printf("%d",0);
            }
            printf("\n");
        }

    }
    return 0;
}
