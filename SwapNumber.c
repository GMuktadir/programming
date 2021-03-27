#include<stdio.h>
//GM
void SwapNumber(int a,int b)
{

     int temp=a;
     a=b;
     b=temp;
     printf("\nAfter swap \na=%d , b=%d",a,b);
}
void main()
    {
     int a=90,b=100,temp;
     printf("a=%d , b=%d",a,b);
     SwapNumber(a,b);

    }
