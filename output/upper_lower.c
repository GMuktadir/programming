#include<stdio.h>
#include<string.h>
void upper_lower(char st[50])
{
  //int len=strlen(st);
  for(int i=0;st[i]!='\0';i++)
  {
    if(st[i]>='A' && st[i]<='Z')
      st[i]+=32;
    else
    {
      if(st[i]>='a' && st[i]<='z') //compulsory for spaced string "Hello Bangladesh"
        st[i]-=32;
    }

  }
  printf("\n %s",st);
}
int main(){
  char st[50];
  printf("Enter a string: ");
  gets(st);
  upper_lower(st);


return 0;
}
