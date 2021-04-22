//GM | 30-03-2021
//Check Co-prime

#include<stdio.h>
int gcd(int a,int b)
{
   int c;
    while(a!=0)
    {
    c=b%a;
    b=a;
    a=c;
    }
    return b;


}
int main()
{
    int num1,num2,Large;
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);

    if(gcd(num1,num2)==1)
        printf("%d and %d are Co Prime",num1,num2);
    else
        printf("Not Co prime");

return 0;
}
