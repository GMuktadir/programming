#include<iostream>
//GM | 21/06/2020
//create a file
#include<fstream>
//GM
//Create and read from file
using namespace std;

int main()
{
    fstream F;
    //F.open("gm.txt",ios::out);
    F.open("gm.txt",ios::in);
     if(!F.is_open()){
           //cout<<"file not created";
           cout<<"File not open !"<<endl;
           }
     else{
           //F<<"Hello your file is ready to operation";
           //Read from file
           cout<<"file is open !"<<endl;
           while(!F.eof())
           {
             string line;
             getline(F,line);
             cout<<line<<endl;
           }
           F.close();

           }



    return 0;
}
