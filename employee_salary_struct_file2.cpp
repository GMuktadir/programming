//GM | 02-04-2021
//Sort the employee from file and find the second largest salary employee
#include<iostream>
#include<fstream>
using namespace std;
class employee
{
public:
    char name[20];
    char post[20];
    double salary;
};
int main()
{
    employee emp[12],temp;
    fstream F,E,G;
    int n,i,j;
    F.open("rawdata.txt",ios::in);
    E.open("empsort.txt",ios::out);
    G.open("empsecondlarge.txt",ios::out);
    if(!F.is_open())
    {
        cout<<"File not open !"<<endl;
    }
    else
    {
        //cout<<"How many number you want to input:"<<endl;
        //cin>>n;
        int n=10;
        cout<<"#####Raw data from file#####"<<endl;
        cout<<"Name\tPost\tSalary\n==============================="<<endl;
        int i=0;
        while(!F.eof())
        {
             F>>emp[i].name>>emp[i].post>>emp[i].salary;
            cout<<emp[i].name<<"\t"<<emp[i].post<<"\t"<<emp[i].salary<<endl;
            i++;
        }

        //sorting salary by bubble sort  ||ASCENDING ORDER
        for(int i=0;i<n-1;i++)
            {
                   for(int j=0;j<n-i-1;j++)
                   {
                       if(emp[j].salary>emp[j+1].salary)
                       {
                           temp=emp[j];
                           emp[j]=emp[j+1];
                           emp[j+1]=temp;
                       }
                   }
            }

        cout<<endl;
        cout<<endl;
        cout<<"#####Sorted w.r.t Salary #####"<<endl;
        cout<<"Name\t"<<"Post\t"<<"Salary"<<endl;
        cout<<"============================"<<endl;
        //for file
        E<<"#####Sorted w.r.t Salary #####\n"<<endl;
        E<<"Name\t"<<"Post\t"<<"Salary"<<endl;
        E<<"===========================\n";
        for(int i=0;i<n;i++)
        {


            E<<emp[i].name<<"\t"<<emp[i].post<<"\t"<<emp[i].salary<<endl;
            cout<<emp[i].name<<"\t"<<emp[i].post<<"\t"<<emp[i].salary<<endl;
        }

        cout<<endl;
        cout<<endl;
        //Second Largest
        cout<<"#####Employee: Second Largest Salary#####"<<endl;
        cout<<"Name\t"<<"Post\t"<<"Salary"<<endl;
        cout<<"==========================="<<endl;
        //For file
        G<<"Employee based on Second Largest Salary\n=============================================="<<endl;
        G<<"Name\t"<<"Post\t"<<"Salary"<<endl;
        G<<"==========================="<<endl;

        for(int i=n-2;i>=0;i--)
        {
            if(emp[i].salary!=emp[i-1].salary)
            {


               G<<emp[i].name<<"\t"<<emp[i].post<<"\t"<<emp[i].salary<<endl;
               cout<<emp[i].name<<"\t"<<emp[i].post<<"\t"<<emp[i].salary<<endl;
               break;
            }
        }
          F.close();
          E.close();
          G.close();



    } //end else

    return 0;
}
