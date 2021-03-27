#include<stdio.h>
int SumDigit(int n){
if(n==1)
    return 1;
else
{
    return(n+SumDigit(n-1));
}

}
int main()
{
    int n=100;
    printf("Sum of Digit: %d",SumDigit(n));
    return 0;
}
