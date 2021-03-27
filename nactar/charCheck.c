#include<stdio.h>
int main()
{
char ch;
printf("Enter number to check negative or positive:");
scanf("%c",&ch);
if(ch>=65 && ch<=90 || ch>=97 && ch<=122)  // Use ASCII code to check character
    printf("You enter a Character");       // A-Z = 65-90
else                                        //a-z =97-122
    printf("It's not  a Character");

return 0;
}
