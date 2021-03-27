#include<stdio.h>
#define N 10
//GM| 04/04/2020
//Hollow inverted half pyramid
int main(){
int i,j,n=6,k=0;
printf("====Hollow inverted half pyramid====\n");
for(i=1;i<=n;i++)
{
    printf("* ");
}

for(i=n;i>=1;i--)
{
    for(j=0;j<n-i;j++)
        while(k!=(2*i-1))
        {
            if(k==0||k==2*i-2)
                printf("*");
            else
                printf(" ");
        k++;
        }
    k=0;
    printf("\n");
}
printf("====Hollow inverted half pyramid (Number)====\n");

for(i=1;i<=n;i++)
{
    printf("%d ",i);
}

for(i=n;i>=1;i--)
{
    for(j=0;j<n-i;j++)
        while(k!=(2*i-1))
        {
            if(k==0||k==2*i-2)
            {
                printf("%d",i);
            }
            else
                printf(" ");
        k++;
        }
    k=0;
    printf("\n");
}

}
