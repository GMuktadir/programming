#include<stdio.h>
#include<conio.h>
int main()
{
    short int ar[3][2]={3,4,5,6,7,8};
    int a=4;
    short int b=7;
    long int c=8;
    float d=3.9;
    double e=2.32;

    printf("ar[1][0]=%d\n",ar[1][0]);

    printf("size of int:%d \n",sizeof(a));
    printf("size of short int:%d \n",sizeof(b));
    printf("size of long int:%d \n",sizeof(c));
    printf("size of float:%d \n",sizeof(d));
    printf("size of double:%d \n",sizeof(e));
    printf("size of short int array:%d \n",sizeof(ar));

    return 0;
}
