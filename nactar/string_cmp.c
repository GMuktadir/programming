//GM |1-04-2021
//string compare with built in function
#include <stdio.h>
#include <string.h>

int main() {
   char str1[20] ="abcd";
   char str2[20] ="aBcd"; //str2 smaller than str1 calculate w.r.t ASCII value
   char str3[20] ="abcd";
   char str4[20] ="abcde";

   printf("str1=%s\nstr2=%s\nstr3=%s\nstr4=%s\n",str1,str2,str3,str4);
   int p=strcmp(str1, str2);
    printf("strcmp(str1, str2) return value strcmp is: %d\n ",p);

    int q=strcmp(str1, str3);
    printf("strcmp(str1, str3) return value strcmp is: %d\n ",q);

     int r=strcmp(str1, str4);
    printf("strcmp(str1, str4) return value strcmp is: %d\n ",r);
   return 0;
}
