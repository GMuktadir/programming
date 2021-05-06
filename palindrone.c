#include<stdio.h>
#include<string.h>
int main(){
  char st[30];
  int f=1,len;
  printf("Enter a string to check to palindrome or not: ");
  //scanf("%[^/]",st);
  gets(st);
  for(len=0;st[len]!='\0';len++);
  //int len=strlen(st);
  //printf("length: %d \n",len);
  for(int i=0;i<len;i++)
  {
    if(st[i]!=st[len-i-1])
    {
      f=0;
      break;
    }

  }
  if(f==0)
    printf("%s(%d): Not palindrome",st,len);
  else
    printf("%s(%d): palindrome",st,len);
  return 0;
}
