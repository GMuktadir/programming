//GM | 23/03/2021
// File operation Basic
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream F;
    string name,designation,line;
    float salary=0.0;

    //Input into file
    F.open("bd.txt",ios::out);
    if(!F.is_open())
    {
        cout<<"File not open !"<<endl;
    }
    else
    {
        int num;
        cout<<"File created Successfully!"<<endl;
        cout<<"How many data do you want to input into File?: ";
        cin>>num;
        for(int i=1;i<=num;i++)
        {
            cout<<i<<".Enter Employee Name:"<<endl;
            cin>>name;
            cout<<i<<".Enter Employee Designation:"<<endl;
            cin>>designation;
            cout<<i<<".Enter Employee Salary:"<<endl;
            cin>>salary;
            F<<" "<<name<<" "<<designation<<" "<<salary<<" "<<endl;
        }
        F.close();
    }
    //Output from File
    F.open("bd.txt",ios::in);
    if(!F.is_open())
    {
        cout<<"File not open !"<<endl;
    }
    else
    {
        cout<<"Read from file!"<<endl;
        cout<<" "<<"Name"<<" "<<"Designation"<<" "<<"Salary"<<" "<<endl<<"=================================================="<<endl;
        while(!F.eof())
        {
            getline(F,line);
            cout<<line<<endl;
        }

        F.close();
    }


    return 0;
}
