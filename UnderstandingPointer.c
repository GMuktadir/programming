#include<stdio.h>
//GM 26/06/2020
int main()
{
int* c,a;
     a=2;
     //careful about pointer variable declaration serial first c then a
     // int* a,c // it's wrong

     c=&a;     // assign address of a to c
     *c=500;  // assign value at address
     printf("c=%d\n",c); // print address
     printf("*c=%d\n",*c); // print value of address

     printf("a=%d\n",a);
     printf("&a=%d",&a);

    // printf("*a=%d",*a); // wrong


}
