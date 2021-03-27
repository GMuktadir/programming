#include<stdio.h>
//GM
void main()
{
    char st[50],st2[50];
    int len,i,j;
    printf("Enter String..");
    gets(st);
    len=strlen(st);
    for(i=len,i>=0;i--)
    {
        printf("%c",st[i]);
    }
    //printf("Reverse string: %c",st2);
}
