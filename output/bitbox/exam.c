#include<stdio.h>
int main()
{
    float f=1.0;
    int i1=(int) f;
    int i2=*(int *) &f;

    printf("%d\n",i1);
    printf("%d\n",i1);
    return 0;
}
