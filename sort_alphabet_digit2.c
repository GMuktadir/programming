#include<stdio.h>
#include<string.h>
void SortAplhaDigit(char st[100])
{
  int len=strlen(st);
  printf("length of string: %d\n",len);

      for(int c=0;st[c]!='\0';c++)
      {
        if(st[c]>=97 && st[c]<=122 || st[c]>=65 && st[c]<=90 || st[c]>=48 && st[c]<=57){
            //st[c]>=97 && st[c]<=122 || st[c]>=65 && st[c]<=90  is ok for dhaka1207-> 0127aadhk
            // but not ok only integer like 1207
            //add st[c]>=48 && st[c]<=57 for only input integer like 1207

          for(int i=0;i<len;i++)
          {
            for(int j=0;j<len-i-1;j++)
            {
              if(st[j]>st[j+1])
              {
                char temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
              }
            }
          }
        }
      }
    printf("%s",st);
}
int main()
{
  char st[100];
  printf("Enter a string: ");
  gets(st);
  SortAplhaDigit(st);


  return 0;
}
//input zyxwvutsrqponmlkjihgfedcba
// dhaka1207
//https://dyclassroom.com/c/c-pointers-and-strings
