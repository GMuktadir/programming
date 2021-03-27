#include<iostream>
//GM | 21/06/2020
//
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    fstream F;
menu:
    cout<<"===Welcome to File Operation==="<<endl;
    cout<<"Press Number "<<endl;
    cout<<"1.Create File\n2.Write to File\n3.Read from File\n4.Exit"<<endl;
    cin>>num;
    switch(num)
        {
        case 1:{
            //create file

                 F.open("write.txt",ios::out); //ios::out for write
                 if(!F.is_open()){
                 cout<<"File not open !"<<endl;
                }
                 else{
                 cout<<"file created successfully!"<<endl;
                 }
                 F.close();
                 }
                 goto menu;
                 break;
        case  2:{
                 //write to file

                 F.open("write.txt",ios::out); //ios::out for write
                 if(!F.is_open()){
                 cout<<"File not open !"<<endl;
                 }
                 else{
               string line;
               cout<<"file is open !"<<endl;
               cout<<"Enter your Name: "<<endl;
               cin>>line;
               F<<line<<endl;
               cout<<"Enter your Age: "<<endl;
               cin>>line;
               F<<line<<endl;
               cout<<"File write successfully."<<endl;
               F.close();
                    }
               }
               goto menu;
               break;
        case 3:{
             string line;
             F.open("write.txt",ios::in); //ios::in for read
             if(!F.is_open()){
             cout<<"File not open !"<<endl;
             }
             else{
            cout<<"===From your File==="<<endl;
            while(!F.eof())
            {
             getline(F,line);
             cout<<line<<endl;
            }
            F.close();

             }
             }
             goto menu;
             break;
        case 4:{
            cout<<"Exit the program"<<endl;
            cout<<"========End========="<<endl;
            exit(0);
            }break;
        default:
            cout<<"default case called";

        }

    return 0;
}
