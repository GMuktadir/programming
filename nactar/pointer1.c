#include<stdio.h>
int main()
{
    //Declaration method 1
    int *p,*q,c=23,d=100;
    //int c=23;
    p=&c;
    q=&d;
    d=99;
    printf("value of c: %d\n",c);
    *p=82;

    printf("Address of c(via pointer): %d\n",p);
    printf("Address of d(via pointer): %d",*q);
    printf("value of c: %d",c);
    return 0;
}
