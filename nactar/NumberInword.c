//GM | 16-03-2021
// write a program to show Number in word
#include<stdio.h>
void NumWord(long int *arr,int len)
{
    for(int i=len;i>=0;i--)
    {
        switch(arr[i])
        {
        case 0:
            printf("ZERO ");
            break;
        case 1:
            printf("ONE ");
            break;
        case 2:
            printf("TWO ");
            break;
        case 3:
            printf("THREE ");
            break;
        case 4:
            printf("FOUR ");
            break;
        case 5:
            printf("FIVE ");
            break;
        case 6:
            printf("SIX ");
            break;
        case 7:
            printf("SEVEN ");
            break;
        case 8:
            printf("EIGHT ");
            break;
        case 9:
            printf("NINE ");
            break;
        default:
                break;
        }
    }

}
int main()
{
    int i=0;
    long int num,arr[20],rem,sum=0;
    printf("Enter Number:");
    scanf("%ld",&num);
    while(num!=0)
    {
        rem=num%10;
        arr[i]=rem;
        num=num/10;
        i++;
    }
    NumWord(&arr,i); // call the function
    return 0;
}
