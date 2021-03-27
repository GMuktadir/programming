#include<iostream>
using namespace std;
int fun(int,int);
int main()
{
    int h;
    h=fun(4,3);
    cout<<h;
    return 0;
}
int fun(int x,int y)
{
    if(x==0)
        return y;
    return fun(x-1,x+y);
}
