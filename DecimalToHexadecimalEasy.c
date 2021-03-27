#include<stdio.h>
//GM 26/06/2020
int main()
{
    int n,digit,i;
    char hex[50];
    printf("==Decimal to Hexadecimal Conversion==\nEnter Number:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Hexadecimal: %d",n);
    }
    else
    {

        for(i=0;n!=0;i++)
        {
            digit=n%16;
            if(digit<10)
            {
                hex[i]=digit+48;
            }
            else
            {
                hex[i]=digit+55;
            }
            n=n/16;
        }

       printf("Hexadecimal: ");

       for(int j=i-1;j>=0;j--)
         printf("%c",hex[j]);


    }
}
