//GM | 23/03/2021
// File operation Basic
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
BubbleSort(float arr[], int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j=len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
               int tmp;
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;

            }
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int num,len;
    float salary=0.0,arr[20];
    fstream F;
    //Input into file
    F.open("ndata.txt",ios::out);
    if(!F.is_open())
    {
        cout<<"File not open !"<<endl;
    }
    else
    {

        cout<<"File created Successfully!"<<endl;
        cout<<"How many data do you want to input into File?: ";
        cin>>num;
        for(int i=1;i<=num;i++)
        {

            cin>>salary;
            F<<salary<<endl;
        }
        F.close();
    }

    //Output from File
    F.open("ndata.txt",ios::in);
    if(!F.is_open())
    {
        cout<<"File not open !"<<endl;
    }
    else
    {
        string val;
        cout<<"Read from file!"<<endl;
        cout<<"===Sorted Value==="<<endl;
        int i=0;
        while(!F.eof())
        {
            //getline(F,line);
            //cout<<line<<endl;
            getline(F,val);
            arr[i]=stof(val);
            i++;
        }
        F.close();
        len=sizeof(arr)/sizeof(arr[0]);
        BubbleSort(arr,len);

    }
    return 0;
}
