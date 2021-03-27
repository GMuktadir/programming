#include<stdio.h>
//GM 26/06/2020
int StringLength(char s[50])
{
    int cnt=0;
    while(s[cnt]!='\0') //every string has null string at the end position
    {
        cnt++;
    }
    //for(cnt=0;s[cnt]!='\0';cnt++); //also possible by for loop

    return cnt;
}
void main()
{
    char st[50];
    int len;
    printf("Enter string: ");
    gets(st);
    len=StringLength(st);
    printf("%s : %d(char length)",st,len);

}
