#include<stdio.h>
int main()
{
    int ar[]={6,7,8,9,0,1,2,4,5,6},*p=ar+5;
    int len=sizeof(ar[0])/sizeof(ar);
    printf("p[1]= %d",p[1]);
    for(int i=0;i<len;i++)
    {
        printf("val= %d",ar[i]);
    }

return 0;
}
