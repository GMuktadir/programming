#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check even or odd:");
    scanf("%d",&num);
    if(num>=48 && num<=57)
    {
        if(num%2==0)
            printf("Number is EVEN \n");
        else
            printf("Number is ODD\n");
    }
   else
        printf("Please Enter a Numeric Value");
return 0;
}
