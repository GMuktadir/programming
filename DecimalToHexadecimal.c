#include<stdio.h>
//GM 26/06/2020
// Not complete

int main()
{
    int n,bin[50],digit,i;
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
    bin[i]=digit;
    n=n/16;
    printf("%d",n);
    }

    printf("Hexadecimal: ");
    char hex[50];
    for(int j=i-1;j>=0;j--)
    {
        if(bin[j]<10)
        {
            hex[j]=(char)bin[j];
        }
        else
        {

            if(bin[j]==10)
            {
                hex[j]='A';
            }
            else if(bin[j]==11)
            {
                hex[j]='B';
            }
             else if(bin[j]==12)
            {
                hex[j]='C';
            }
             else if(bin[j]==13)
            {
                hex[j]='D';
            }
             else if(bin[j]==14)
            {
                hex[j]='E';
            }
             else if(bin[j]==15)
            {
                hex[j]='F';
            }

        }


    }
      for(int j=i-1;j>=0;j--)
        printf("%c",hex[j]);
       // printf("%d",bin[j]);
    }


}
