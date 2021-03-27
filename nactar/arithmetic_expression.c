//GM | 10-03-2021
//Expression
#include<stdio.h>
int main()
{
    int a=5,b=10,c=15,d=20,e=25,f=30,g=35,h=40,y=0,z=0,x=0;
    y=(a+b)*(c+d)+e-f/g*h;
    z=(a*b)+c*d*e+f/g+h;
    x=(a%b)/b+c*d+(f/e)-(g*h);

    printf("(a+b)*(c+d)+e-f/g*h: %d",y);

    printf("\n(a*b)+(c*d)*e+f/g+h: %d",z);

    printf("\n(a%b)/b+c*d+(f/e)-g*h: %d",x);

    //Logical operator
    printf("\nLogical operator\n");
    if(a<b && c<d)
        printf("a is less than b and c is less than d\n");
    else
        printf("a<b && c<d condition is not satisfied");

    //Relational operator
    printf("\nRelational operator\n");
    if(a<=b || c!=d)
        printf("a is less or equal to b OR c is not equal to d\n");
    else
        printf("a<=b || c!=d condition is not satisfied");
return 0;
}
