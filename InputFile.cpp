#include<iostream>
//GM | 21/06/2020
//
#include<fstream>
using namespace std;

int main()
{
    fstream F;
    F.open("gm.txt",ios::out);
     if(!F.is_open()){
           cout<<"File not open !"<<endl;
           }
     else{
           string name;
           int age;
           cout<<"file is open !"<<endl;
           cout<<"Enter your Name: "<<endl;
           cin>>name;
           F<<name<<endl;
           cout<<"Enter your Age: "<<endl;
           cin>>age;
           F<<age<<endl;
           F.close();
     }



    return 0;
}
