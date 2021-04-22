#include<stdio.h>


int main()
{
FILE *fp;
char ch;
int i=0,j=0;
fp=fopen("input.txt","w");
while((ch=getchar())!=EOF)
{
 putc(ch,fp);
}
fclose(fp);
fp=fopen("input.txt","r");
while((ch=getc(fp))!=EOF)
{
 if(isalpha(ch))
 {
 i+=1;
 }
 if(isdigit(ch))
 {
     j+=1;
 }
}
fclose(fp);
printf("digit:%d \nCharacter:%d",j,i);

    return 0;
}
