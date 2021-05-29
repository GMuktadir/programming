#include<iostream>
#include<string>
using namespace std;
//function definition
void display(string st[],int len);
void SortString(string st[10],int len);

void SortString(string st[10],int len)
{
  cout<<"==Name before sorting=="<<endl;
   display(st,len);

      for(int i=0;i<len;i++)  //bubble sort
      {
        for(int j=0;j<len-i-1;j++)
        {
          if(st[j]>st[j+1])
          {
            string temp;
            temp=st[j];
            st[j]=st[j+1];
            st[j+1]=temp;
          }
        }
      }

     cout<<"\n==Name after sorting=="<<endl;
      display(st,len);
}
void display(string st[],int len)
{
  for(int i=0;i<len;i++)
      cout<<st[i]<<endl;
}

int main()
{
  //char name[50][20]; // char name[50] total 20 name
  string name[10];
  int n;
  printf("How many names:");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("Enter name[%d]: ",i);
    cin>>name[i];
  }

  SortString(name,n);



  return 0;
}

