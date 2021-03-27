#include<stdio.h>
int main()
{
    int a=10,b=20,n,cnt=0;
    n=a^b;
    while(n>0)
    {
        cnt++;
        n&=(n-1);
    }
    printf("Number of bit flipped: %d",cnt);
    return 0;
}
