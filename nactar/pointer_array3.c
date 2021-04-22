//GM | 1-04-2021
//Pointer and array

#include<stdio.h>

int main()
{

    int x[5]={1,2,3,4,5},*pt;
    pt=&x[2];
    printf("*pt=%d \n",*pt);
    printf("*(pt+1)=%d \n",*(pt+1));
    printf("*(pt-1)=%d \n",*(pt-1));



    return 0;
}
