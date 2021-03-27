#include<stdio.h>
int main()
{
    // here main fact is comma used as operator
 int i,j;
 i=j=2,3;   // comma operator check from left
 while(--i&&j++)
    printf("%d %d \n",i,j);
printf("\n");

int a,b;
a=b=(2,3);  // comma operator check from right because of ()
 while(--a&&b++)
    printf("%d %d",a,b);
return 0;
}
