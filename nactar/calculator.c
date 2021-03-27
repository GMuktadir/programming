//Simple Calculation
//GM | 09-03-2021
#include<stdio.h>
int main()
{
    //initialization
    int Num1,Num2,Sum,Sub,Mul;
    float Div;
    printf("Enter First Number: ");
    scanf("%d",&Num1);
    printf("Enter Second Number: ");
    scanf("%d",&Num2);
    Sum=Num1+Num2;
    Sub=Num1-Num2;
    Mul=Num1*Num2;
    Div=Num1/Num2;

    printf("===Simple Calculation===\n");

    printf("Summation (Num1+Num2):%d\n",Sum);
    printf("Substraction (Num1-Num2):%d\n",Sub);
    printf("Multiplication (Num1*Num2):%d\n",Mul);
    printf("Division (Num1/Num2):%0.2f\n",Div);
return 0;
}
