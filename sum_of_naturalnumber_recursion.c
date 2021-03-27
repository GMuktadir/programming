#include<stdio.h>
int sum(int n){
if(n!=0)
    return n+sum(n-1);
else
    return n;
}
int main()
{
    int n;
    printf("Enter number:");\
    scanf("%d",&n);
    printf("Sum of Natural Number: %d",sum(n));
    return 0;
}
