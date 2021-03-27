#include<stdio.h>
//GM

void SwapNumberPointer(int *p,int *q)  //catch the address of a and b
{
    int temp;
     temp=*p; // value at address of a assign to temp (w.r.t memory address)
     *p=*q;
     *q=temp;
     //printf("a=%d, b=%d",*p,*q);


}
void main()
    {
     int a=10,b=199,temp,*p,*q;
     printf("Swapping Number using pointer\n");
     printf("a=");
     scanf("%d",&a);
     printf("\nb=");
     scanf("%d",&b);
     SwapNumberPointer(&a,&b);
     printf("a=%d,b=%d",a,b);

    }
