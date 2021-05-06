#include<stdio.h>
#define MAXSIZE 200
// GM | 03-05-2021
void CharCount(char ch[50])
{
    int cnt;
    for(cnt=0;ch[cnt]!='\0';cnt++){}
    printf("\n char: %d char",cnt);

}
void WordCount(char st[MAXSIZE])
{
    int cnt,word=0,line=0;
    for(cnt=0;st[cnt]!='\0';cnt++){
        if(st[cnt]==' ')
        {
            word++;
        }

    }
    printf("\nWord: %d ",word+1);
}
void LineCount(char st[MAXSIZE]){
    int cnt,line=0;
    for(cnt=0;st[cnt]!='\0';cnt++){

    if(st[cnt]=='\n'){
        line++;
    }


    }
    printf("\n Line: %d",line);
}
void AlphabetCount(char st[MAXSIZE]){
    int cnt,alphabet=0;
    for(cnt=0;st[cnt]!='\0';cnt++){

    if(st[cnt]>=65 && st[cnt]<=90 || st[cnt]>=97 && st[cnt]<=122)
        alphabet++;

    }
    printf("\nAlphabet: %d ",alphabet);
}
void DigitCount(char st[MAXSIZE]){
    int cnt,digit=0;
    for(cnt=0;st[cnt]!='\0';cnt++){
      if(st[cnt]>=48 && st[cnt]<=57)
        digit++;
    }
    printf("\n Digit: %d ",digit);
}
int main()
{
    char st[50];
    printf("Enter a string to count of word:");
    scanf("%[^~]",&st);  // when find ~ then terminate
    //gets(st);
    //Number of character
    CharCount(st);
    //Number of Word
    WordCount(st);
    //Number of line
    LineCount(st);
    //Number of Alphabet
    AlphabetCount(st);
    //Number of digit
    DigitCount(st);

    return 0;
}
