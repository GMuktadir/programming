#include<stdio.h>
int main()
{
    int a=11,c,b;
    c=(a=99)?b=11:20;
    printf("%d,%d",a,c);
return 0;
}
