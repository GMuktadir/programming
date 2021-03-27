#include<stdio.h>
//series: 1 2 3 6 9 18 27 54
int main()
{
    long fact=1,n=10,p;
    long sum=0.0;
    int a=1,b=2;
    printf("%d %d",a,b);
    for(int i=3;i<=n;i++)
    {
        if(i%2==1)
        {
            a*=3;
            printf("%d ",a);
        }
        else
        {
            b*=3;
            printf("%d ",b);
        }
    }

    return 0;
}
