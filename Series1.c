#include<stdio.h>
#include<math.h>
//GM 27/06/2020
int main()
{
    float sum=0.0,x;
    int n;
    printf("1+x+x^2+x^3+.....+x^n\n");
    printf("Enter the value of x:");
    scanf("%f",&x);
    printf("\nEnter the value of x:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        sum+=pow(x,i);
    }
    printf("summation: %0.2f",sum);
}
