#include<stdio.h>
int main()
{
    int num=428,rev=0;

    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    printf("Reverse integer: %d",rev);

return 0;
}
