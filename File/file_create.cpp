#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream F;
  F.open("file_1.txt",ios::out);
  if(!F.is_open())
  {
    cout<<"File is not open! ";
  }
  else
  {
    F<<"Bangladesh"<<endl;
    cout<<"File is successfully created and insert text into file ";
  }

  F.close();
  return 0;
}
