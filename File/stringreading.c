#include<stdio.h>
int main()
{
FILE *fp;
char c;
fp=fopen("string.txt","w");
while((c=getchar())!=EOF)
{
 //putc(c,fp);
 fprintf(fp,"%c",c);
}
fclose(fp);
fp=fopen("string.txt","w");
while((c=getc(fp))!=EOF)
{
 printf("Character= %c  Position = %d",c,ftell(fp));
}

return 0;
}
