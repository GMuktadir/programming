#include <stdio.h>
#include <string.h>

int main() {
   char str1[20] = "C programming";
   char str2[20];

   // copying str1 to str2
   int p=strcpy(str2, str1);
   if(p)
    printf("Copied: %d\n ",p);
   else
    printf("Not copied");

   puts(str2); // C programming

   return 0;
}
