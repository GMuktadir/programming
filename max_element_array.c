#include<stdio.h>

int main()
{
    int a[10]={1,2,3,4,44332,100,44,555};
    int max=0;
    for(int i=0;i<7;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("max= %d",max);


    return 0;
}
