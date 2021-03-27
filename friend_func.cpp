#include<iostream>
using namespace std;
class Distance
{
private:
    int meters,val;
public:
    Distance() //constructor
    {
        meters=0;
    }
    void display()
    {
        cout<<"Meters: "<<meters;
        cout<<endl;

    }
   friend void addValue(Distance &d);

};
void addValue(Distance &d)
{
    cout<<"Add some value: meter "<<endl;
    cin>>d.val;
    d.meters+=d.val;
}
int main()
{
    Distance d1;
    d1.display();

    addValue(d1);
    d1.display();

 return 0;
}
