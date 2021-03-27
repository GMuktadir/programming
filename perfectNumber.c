#include<stdio.h>
//GM 26/06/2020
int main()
{
    int n;
    scanf("%d",&n);
    int i,s=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if(n==s)
        printf("It's a perfect number: %d",n);
    else
        printf("It's not a perfect number: %d",n);

return 0;
}
