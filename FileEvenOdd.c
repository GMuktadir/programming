#include<stdio.h>
//GM |1-04-2021
int main()
{
    fstream F;
    string name,designation,line;
    float salary=0.0;

   F.open("numbers.txt",ios::in);
   F.open("even.txt",ios::out);
   F.open("odd.txt",ios::out);
    if(!F.is_open())
    {
        cout<<"File not open !\n"<<endl;
    }
    else
    {
        cout<<"Read from file!"<<endl;
        //cout<<" "<<"Name"<<" "<<"Designation"<<" "<<"Salary"<<" "<<endl<<"=================================================="<<endl;
        while(!F.eof())
        {
            getline(F,line);
            cout<<line<<endl;
        }

        F.close();
    }
}
