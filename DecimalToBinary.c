#include<stdio.h>
//GM 26/06/2020
int main()
{
    int n,bin[50],digit,i;
    printf("==Decimal to Binary Conversion==\nEnter Number:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Binary: %d",n);
    }
    else
    {
    for(i=0;n!=0;i++)
    {
    digit=n%2;
    bin[i]=digit;
    n=n/2;
// printf("%d",n);
    }
    printf("Binary: ");
    for(int j=i-1;j>=0;j--)
        printf("%d",bin[j]);
    }


}
