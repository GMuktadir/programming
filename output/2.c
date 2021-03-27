#include<stdio.h>
#include<string.h>
int main()
{
   char s[32]="niksat";
   char  t[32]="";
   strrev(s);
   strcpy(t,s);
   strcat(t," so so");
   printf("%s\n",t);
   printf("%s\n",strcmp("taskin",t));
    return 0;
}
//strcmp("tsakvar",t)
