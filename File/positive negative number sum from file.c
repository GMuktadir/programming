//coder ~gm
#include<stdio.h>
int main()
    {
FILE *fp;
char num[50];
fp=fopen("input.txt","w");
int i=0;
while(num[i]!=-99)
{
 scanf("%c",&num[i]);
}

fclose(fp);
    return 0;
    }
