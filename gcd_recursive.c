#include<stdio.h>
int GCD(int x,int y)
{
    int gcd;
    if(y%x==0)
        return x;
    gcd=GCD(y%x,x);
    return(gcd);
}
int main()
{
    int x,y;
    printf("GCD");
    printf("\nEnter Divisor:");
    scanf("%d",&x);
    printf("\nEnter Dividend:");
    scanf("%d",&y);
    printf("GCD is :%d",GCD(x,y));
    return 0;
}
