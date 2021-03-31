//GM | 30-03-2021
//Check Co-prime

#include<stdio.h>
int gcd(int a,int b)
{
    int L,f;
    if(a>b)
        L=a;
    else
        L=b;

    while(1)
    {
        if(a%L==0&&b%L==0)
        {
            f=0;
            break;
        }
        else
            L+=1;
    }
    return f;


}
int main()
{
    int num1,num2,Large;
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);

    if(gcd(num1,num2)==0)
        printf("%d and %d are Co Prime",num1,num2);
    else
        printf("Not Co prime");

return 0;
}
