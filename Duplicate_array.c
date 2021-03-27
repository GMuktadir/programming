#include<stdio.h>
int main()
{
    int a[11]={1,4,6,7,8,9,6,4,3,77,80},len,cnt;
    int f[11]={1,1,1,1,1,1,1,1,1,1,1};
    int i,j;
    len=sizeof(a)/sizeof(a[0]);
    //printf("length: %d",len);
    for(i=0;i<len;i++)
    {
        cnt=1;
        for(j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
                {
                    cnt++;
                    f[j]=0;
                }
        }

         if(f[i]!=0)
         {
             f[i]=cnt;
         }

    }
    printf("\n Unique element\n");
    for(i=0;i<len;i++)
    {
        if(f[i]==1)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
