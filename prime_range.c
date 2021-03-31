//GM |28-03-2021
//Check prime between two range
#include<stdio.h>
int PrimeRange(int r1,int r2)
{
    int p=1,i,j;
    for(i=r1;i<r2;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                {
                    break;
                }
        }
            if(i==j)
                printf("%d,",j);
    }
}
int main()
{
int r1,r2,p;
printf("Enter First Number of the range:\n");
scanf("%d",&r1);
printf("Enter Second Number of the range:\n");
scanf("%d",&r2);
PrimeRange(r1,r2);


return 0;
}
