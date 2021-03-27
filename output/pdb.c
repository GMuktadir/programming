#include<stdio.h>
int main()
{
    int a=10,c,b;
    c=(a=1)?b=11:20;
    printf("a: %d  c: %d  b: %d",a,c,b);
    return 0;
}
