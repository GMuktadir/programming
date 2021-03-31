//GM | 27-03-2021
// Greatest Common Divisor
#include<stdio.h>
void gcd(int L,int a,int b)
{
        while(1)
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
 printf("Enter First Name:");
 scanf("%d",&a);
 printf("Enter Second Name:");
 scanf("%d",&b);

 if(a<b)
        L=a;
 else
        L=b;

gcd(L,a,b);

return 0;
}
