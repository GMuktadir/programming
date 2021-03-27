//Simple Calculation
//GM | 09-03-2021
#include<stdio.h>
int main()
{
    float Num1,Num2,Num3,Sum,Sub,Mul,Div;
    printf("Enter First Number: ");
    scanf("%f",&Num1);
    printf("Enter Second Number: ");
    scanf("%f",&Num2);
    Sum=Num1+Num2+Num3;
    Sub=Num1-Num2;
    Mul=Num1*Num2;
    Div=Num1/Num2;

    printf("===Simple Calculation===\n");
    printf("Summation (Num1+Num2+Num3):%0.2f\n",Sum);
    printf("Substraction (Num1-Num2):%0.2f\n",Sub);
    printf("Multiplication (Num1*Num2):%0.2f\n",Mul);
    printf("Division (Num1/Num2):%0.2f\n",Div);
return 0;
}
