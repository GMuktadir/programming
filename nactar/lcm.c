//GM | 27-03-2021
//Greatest Common Divisor
// Least common Multiple
#include<stdio.h>
void lcm(int L,int a,int b)
{
        while(1)
        {
            if(L%a==0 && L%b==0)
             {
                 printf("Least Common Multiple: %d",L);
                 break;
             }
             else
             {
                 L+=1;
             }
        }

}
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
 int a,b,L,menu,m;
 printf("Enter First Name:");
 scanf("%d",&a);
 printf("Enter Second Name:");
 scanf("%d",&b);

 if(a>b)
    L=a;
 else
    L=b;
printf("1.GCD\n2.LCM\n->");
menu:
scanf("%d",&m);
switch(m)
{
case 1:
    gcd(L,a,b);
    break;
case 2:
    lcm(L,a,b);
    break;
default:
    printf("Enter 1 or 2: ");
    goto menu;
    break;
}



return 0;
}
