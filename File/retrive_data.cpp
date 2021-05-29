#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream F;
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
      F>>st;
    cout<<st<<" "<<endl;
    }

  }

  F.close();
  return 0;
}
