#include<iostream>
#include<string>
using namespace std;
int main()
{
 string st;
 int j;
 cout<<"Enter a string: ";
 getline(cin,st);
  //Remove all char from string except alphabet
  for(int i=0;i<st.size();++i)
  {
      while(!((st[i]>=65 && st[i]<=90)||(st[i]>=97 && st[i]<=122)||st[i]=='\0'))
        {
            for(j=i;st[j]!='\0';++j)
            {
                st[j]=st[j+1];
            }
            st[j]='\0';
        }
  }

  cout<<"After Removing Char except aplhabet: 1  ";
    cout<<st;





}

