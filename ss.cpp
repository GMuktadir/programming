#include<iostream>
#include<string>
using namespace std;
int main()
{
    string st;
    char NoSpace[100];
    int cnt_small_letter=0,cnt_capital_letter=0,cnt_digit=0,cnt_space=0,cnt_vowel=0,cnt_consonant=0;
    getline(cin,st);
    int j=0;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]>=65 && st[i]<=90) //26 alphabet capital
        {
            ++cnt_capital_letter;
        }
        if(st[i]>=97 && st[i]<=122) //26 alphabet samll
        {
            ++cnt_small_letter;
        }
        if(st[i]>=48 && st[i]<=57) //0-9 Digit
        {
            ++cnt_digit;
        }
        if(st[i]==' ')
            ++cnt_space;

        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||
           st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U') //both small and Capital
            ++cnt_vowel;
        else if(st[i]>=65 && st[i]<=90 || st[i]>=97 && st[i]<=122) //both small and Capital
            ++cnt_consonant;
    //Remove spaces from string
        if(st[i]!=' ')
        NoSpace[j++]=st[i];
        NoSpace[j]='\0'; //add null char at the end of string

        //Toggle each char of a string | Capital to Small or Small to Capital
        if(st[i]>=65 && st[i]<=90)
            st[i]=st[i]+32;  //Capital to small letter
        else if(st[i]>=97 && st[i]<=122)
            st[i]=st[i]-32;  //Small to capitals



    }

    cout<<"Number of Small Letter: "<<cnt_small_letter<<endl;
    cout<<"Number of Capital Letter: "<<cnt_capital_letter<<endl;
    cout<<"Number of Digits: "<<cnt_digit<<endl;
    cout<<"Number of Spaces: "<<cnt_space<<endl;
    cout<<"Number of Vowels: "<<cnt_vowel<<endl;
    cout<<"Number of Consonants: "<<cnt_consonant<<endl;
    cout<<"String without space: "<<NoSpace<<endl;
    cout<<"Toggle character: "<<st ;

return 0;
}
