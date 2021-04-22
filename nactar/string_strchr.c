//GM |1-04-2021
//string compare with built in function
#include <stdio.h>
#include <string.h>

int main() {
   char c[100]="Bangladesh is our motherland";
   printf("Match char: %s\n",strchr(c,'i'));   // return  string
   printf("Match String: %s",strstr(c,"our")); // return  string


   return 0;
}
