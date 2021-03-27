//GM | 11-03-2021
//Simple if else condition check
#include<stdio.h>
int main()
{
    int your_age,friend_age;
    printf("Enter your age:");
    scanf("%d",&your_age);
    printf("Enter your friend's age:");
    scanf("%d",&friend_age);

    if(your_age!=0 && friend_age!=0 && your_age>0 && friend_age>0)
    {
        if(your_age>friend_age)
        printf("You are older than your friend !\n");
        if(your_age<friend_age)
        printf("You are younger than your friend !\n");
        if(your_age==friend_age)
        printf("Both of you are same age !\n");
    }
    else
    {
        printf("==>Error! you enter zero or minus value, please enter valid Age\n\n");

    }

return 0;
}
