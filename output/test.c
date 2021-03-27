#include<stdio.h>
int main()
{
    char s[200],s1[200];
    gets(s);
    gets(s1);
    fun(s,s1);
    return 0;
}
int fun(char *s,char *sup)
{
    if(s=="\0")
        return;
    else if(s==sup)
        fun(s+1,sup+1);
    else
    {
        printf("%s\n",s);
        fun(s+1,sup);
    }
}
