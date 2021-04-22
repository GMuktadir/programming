//GM |1-04-2021
//string compare with built in function
#include <stdio.h>
#include <string.h>

int main() {
   char str1[20] ="Bangla";
   char str2[20] ="desh"; //str2 smaller than str1 calculate w.r.t ASCII value

   int p=strcat(str1,str2);

   printf("return value of strcat: %d",p);


   return 0;
}
