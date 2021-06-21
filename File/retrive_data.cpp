#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream F;
  int cnt=0;
  char c;
  //char st[20];
  string st;
  F.open("data_retrive.txt",ios::in);
  if(!F.is_open())
  {
    cout<<"File is not open! ";
  }
  else
  {
    while(!F.eof())
    {
    //F.getline(st,20,',');  //not use endl with cout
        if(getline(F,st))
        {
          cout<<st<<endl;
        //if(c=='\n')
          cnt++;
        }

    }

  }
  cout<<"Total line in file:"<<cnt;

  F.close();
  return 0;
}
