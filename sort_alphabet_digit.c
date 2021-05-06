#include<stdio.h>
#include<string.h>
void SortAplhaDigit(char st[100])
{
  int len=strlen(st);
  printf("length of string: %d\n",len);
    for(int i=0;i<len-1;i++)
    {
      for(int j=0;j<len-i-1;j++)
      {
        if(st[j]>st[j+1]); //ascending order >
        {
          printf("%c > %c \n",st[j],st[j+1]);
          char temp;
          temp=st[j];
          st[j]=st[j+1];
          st[j+1]=temp;
        }

      }
      printf("\n");
    }
    printf("%s",st);
//    for(int i=0;i<len;i++)
//      printf("%c",st[i]);
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
