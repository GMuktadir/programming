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
    employee emp[5],temp;
    fstream F,E;
    int n,i,j;
    F.open("employee.txt",ios::out);
    E.open("employeesort.txt",ios::out);
    if(!F.is_open())
    {
        cout<<"File not open !"<<endl;
    }
    else
    {
        cout<<"How many number you want to input:"<<endl;
        cin>>n;
        cout<<"Name\tPost\tSalary"<<endl;
        for(int i=0;i<n;i++)
        {

            cin>>emp[i].name>>emp[i].post>>emp[i].salary;
            F<<emp[i].name<<" "<<emp[i].post<<" "<<emp[i].salary<<endl;
        }



        //sorting salary by bubble sort  ||ASCENDING ORDER
        for(i=0;i<n-1;i++)
            {
                   for(j=0;j<n-i-1;j++)
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
        for(int i=0;i<n;i++)
        {
            E<<emp[i].name<<" "<<emp[i].post<<" "<<emp[i].salary<<endl;
            cout<<emp[i].name<<" "<<emp[i].post<<" "<<emp[i].salary<<endl;
        }

        cout<<endl;
        cout<<endl;
        //Second Largest
        cout<<"#####Employee: Second Largest Salary#####"<<endl;
        cout<<"Name\t"<<"Post\t"<<"Salary"<<endl;
        for(int i=n-2;i>=0;i--)
        {
            if(emp[i].salary!=emp[i-1].salary)
            {
                cout<<"Employee based on Second Largest Salary"<<endl;
               cout<<emp[i].name<<" "<<emp[i].post<<" "<<emp[i].salary<<endl;
               break;
            }
        }
          F.close();
          E.close();



    } //end else

    return 0;
}
