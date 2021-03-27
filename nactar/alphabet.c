//GM | 16-03-2021
// write a program to display of alphabet from a-z
#include<stdio.h>
int main()
{
    int menu,cnt=0;
    printf("===Show alphbet===\n\n1. Capital Letter \n2. Small Letter\n");
    printf("Menu:");
    menu:
    scanf("%d",&menu);
    switch(menu)
    {
    case 1:
        printf("\n==CAPITAL LETTER==\n");
        for(int i=65;i<=90;i++)  // USE ASCII VALUE
            printf("%c ",i);
        break;
    case 2:
        printf("\n==SMALL LETTER==\n");
        for(int i=97;i<=122;i++) // USE ASCII VALUE
            printf("%c ",i);
        break;
    default:
        printf("\nPlease Enter menu 1 or 2\n");
        goto menu;
        break;
    }



    return 0;
}
