#include<iostream>
using namespace std;
int a=233;
int main()
{
    int a=3;
   cout<<"Locale var: "<<a<<endl;
   cout<<"Global var: "<<::a<<endl;
    return 0;
}
