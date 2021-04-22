
#include<stdio.h>
int main()
{
    //Declaration method 1
    int x[5];
    for(int i=0;i<5;i++)
    {
        printf("&x[%d]=%d\n",i,&x[i]);
    }
    printf("Address of array: %d\n",x);

    return 0;
}
