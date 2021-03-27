#include<stdio.h>
int sum_of_digit(int n){
int sum=0,rem;
if(n==0)
    return 0;
rem=n%10;
sum=rem+sum_of_digit(n/10);
return(sum);
}
int main()
{
    int n=1234,sum=0,rem;

    printf("%d",sum_of_digit(n));

    return 0;
}
