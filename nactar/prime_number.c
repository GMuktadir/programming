//GM |15-03-2021
//Check prime or not
#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int c;
    for(c=2;c<n;c++)
    {
        if(n%c==0)
            return 0;
        else
            return 1;
    }


}
int main()
{
    int num,p=1;
    printf("Enter number to check to prime or not:");
    scanf("%d",&num);
    p=prime(num);
    if(p==0)
        printf("Number is not a prime\n");
    else
        printf("Number is prime\n");




return 0;
}
