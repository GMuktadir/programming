
#include<stdio.h>
int main()
{
    //Declaration method 1
    int c=90;
    int* p=&c;
    int *q=NULL;
    printf("Address of c: %d\n",p);
    printf("value of c: %d\n",*p);
    printf("pointer q(NULL): %d\n",q);

    return 0;
}
