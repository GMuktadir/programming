#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  char st[30],result;
  cin>>st;
  int len=strlen(st);
  int cnt[123]={0},max=0;
  for(int i=0;i<len;i++)
  {
    cnt[st[i]]++;
    //cout<<cnt[i]<<endl;
    if(max<cnt[st[i]])
    {
      //cout<<max<<"<"<<cnt[st[i]]<<endl;
      max=cnt[st[i]];
      result=st[i];
    }
  }
  cout<<"Max occur char: "<<result;
  return 0;
}
