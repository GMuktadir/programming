#include<stdio.h>
int max_element(int a[])
{
    int max=-9999, n=7;
    static int i=0;
    if(i<n)
    {
        if(max<a[i])
        {
           max=a[i];
        }
    i++;
    max_element(a);
    }
    return(max);
}
int main()
{
    int a[10]={1,2,3,4,44332,100,44,555};
    int max=0;
    printf("Max element: %d ",max_element(a));


    return 0;
}
