#include <stdio.h>

int main ()
{
   FILE *fp;
   int len,i,num;
   char ch;
 /*     fp = fopen("file.txt", "w");
 while((ch=getchar())!=EOF)
 {
   putc(ch,fp);
 }
fclose(fp);  */

fp = fopen("file.txt", "r");
   while((ch=getc(fp))!=EOF)
 {
   printf("%c",ch);
 }
 fseek(fp,-1,2);

for(i=0;i<6;i++)
{
    ch=getc(fp);
     printf("%c",ch);
     fseek(fp,-2,1);
}
fclose(fp);
   return(0);
}
