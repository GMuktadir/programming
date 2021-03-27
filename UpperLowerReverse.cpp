#include<iostream>
//GM | 25/06/2020
using namespace std;
void changeCaseAndReverse(string &str)
{
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;

     for(int i=0;i<l/2;i++)
     swap(str[i], str[l-i-1]);
    }
}

int main()
{
    string st;
    cin>>st;
    changeCaseAndReverse(st);
    cout<<st;



    return 0;
}
