#include<stdio.h>
int main()
{
    int a=20;
    int *p,q;
    p=&a;
    q=&p;
    printf("p: %d\n",p);    // address of a
    printf("*p: %d\n",*p); // value at  address of a
    printf("&p: %d\n",&p); // address of p
    printf("q: %d\n",q);   //q hold the address of p

    if(&p==q)
    {
        printf("&p and q is same\n");
    }

    return 0;
}
