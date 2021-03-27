#include<iostream>
using namespace std;

void input_matrix(int matrix[10][10],int row,int col)
{
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            //cout<<"Enter a [i+1][j+1]:";
            cout<<"Enter a ["<<i+1<<"]["<<j+1<<"]:";
            cin>>matrix[i][j];
        }
    }
}

void multiply_matrix(int first[10][10],int second[10][10],int result[10][10],int r1,int c1,int r2,int c2)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            result[i][j]=0;
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                result[i][j]+=first[i][k]*second[k][j];
            }

        }
    }
}
void display(int result[10][10],int row,int col)
{
    cout<<"Resultant matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<result[i][j]<<"  ";

        }
        cout<<endl;
    }
}
int main()
{
    int r1,r2,c1,c2,first[10][10],second[10][10],result[10][10];
    cout<<"Enter 1st Matrix Row and Column Size"<<endl;
    cin>>r1>>c1;

    cout<<"Enter 2nd Matrix Row and Column Size"<<endl;
    cin>>r2>>c2;
    while(c1!=r2)    //m*n  *  n*p -> m*p
    {
        cout<<"Error! Not possible multiplication | Mismatch "<<endl;
        cout<<"Enter again 1st row and column"<<endl;
        cin>>r1>>c1;
        cout<<"Enter again 2nd row and column"<<endl;
        cin>>r2>>c2;
    }

    input_matrix(first,r1,c1);
    input_matrix(second,r2,c2);
    multiply_matrix(first,second,result,r1,c1,r2,c2);
    display(result,r1,c2);

    return 0;
}
