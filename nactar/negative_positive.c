#include<stdio.h>
int main()
{
int num;
printf("Enter number to check negative or positive:");
scanf("%d",&num);
if(num==0)
    printf("\nNumber is zero!\n");
else if(num>0)
    printf("\nNumber is positive!\n");
else
    printf("\nNumber is Negative!\n");
return 0;
}
