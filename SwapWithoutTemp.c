#include<stdio.h>
//GM swap without temp variable
void SwapNumber(int a,int b)
{
    if(a==b){
        printf("Both number are same! ");
    }
    else
    {
         if(a>b)
         {
             b=a-b;
             a=a-b;
             b=a+b;
         }
         else if(b>a)
         {
             a=b-a;
             b=b-a;
             a=b+a;
         }
         printf("After swapping: a=%d ,b=%d",a,b);
    }

}
void main()
    {
    int a,b;
    printf("First Number: ");
    scanf("%d",&a);
    printf("\nSecond Number:");
    scanf("%d",&b);
    SwapNumber(a,b);

    }
