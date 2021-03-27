#include<iostream>
#include<string>
using namespace std;
int main()
{
 string st;
 int j,sum=0;
 cout<<"Enter a string: ";
 getline(cin,st);
  //Remove all char from string except alphabet
  for(int i=0;i<st.size();++i)
  {
      if(st[i]>=48 && st[i]>=57)
      {
          sum+=st[i]p-'0';
      }

  }

  cout<<"Summation of number from the string"<<st<<" :";
    cout<<st;





}

