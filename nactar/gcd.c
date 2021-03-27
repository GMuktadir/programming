//GM | 27-03-2021
// Greatest Common Divisor
#include<stdio.h>
void gcd(int L,int a,int b)
{
        while(2)
        {
            if(a%L==0 && b%L==0)
             {
                 printf("Greatest Common Divisor: %d",L);
                 break;
             }
             else
             {
                 L-=1;
             }
        }

}
int main()
{
 int a,b,L;
 printf("Enter Divisor: ");
 scanf("%d",&a);
 printf("Enter Dividend: ");
 scanf("%d",&b);

 if(a<b)
        L=a;
 else
        L=b;

gcd(L,a,b);

return 0;
}
