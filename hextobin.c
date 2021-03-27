//Hex to Binery
#include<stdio.h>

int main()
{
    int n,i,a[16],j,temp;
    scanf("%d",&n);
    i = 0;
    while(n)
    {
        temp = n%16;
        if(temp < 10)
            a[i++] = temp + 48;
        else
            a[i++] = temp + 55;//'7'=55

        n /= 16;
    }
    printf("The binery is: ");
    for(j = i-1; j >= 0; j--)
    {
        printf("%c",a[j]);
    }
}
