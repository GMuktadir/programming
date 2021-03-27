//GM |21-03-2021
// Input value in array
//Addition of array
//Subtraction of array
#include<stdio.h>
int Add(int ar[][10],int br[][10],int res[][10],int n)
{
    printf("\n\n==Resultant Matrix (Addition)==\n\n");
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<n;col++)
            {
                res[row][col]=ar[row][col]+br[row][col];
                printf("res[%d][%d]=%d  ",row,col,res[row][col]);

            }
            printf("\n");
        }
}
int Sub(int ar[][10],int br[][10],int res[][10],int n)
{
    printf("\n\n==Resultant Matrix (Subtraction)==\n\n");
            for(int row=0;row<n;row++)
            {
                for(int col=0;col<n;col++)
                {
                    res[row][col]=ar[row][col]-br[row][col];
                    printf("res[%d][%d]=%d  ",row,col,res[row][col]);

                }
                printf("\n");
            }
}
int main()
{
    int n,col,row,ar[10][10],br[10][10],res[10][10],op;
    printf("Please input the array dimension: ");
    scanf("%d",&n);
    // Input for First Array
    printf("\n\n==Input for First Array==\n\n");
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("ar[%d][%d]:",row,col);
            scanf("%d",&ar[row][col]);
        }
    }
    // Input for Second Array
    printf("\n\n==Input for Second Array==\n\n");
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("br[%d][%d]: ",row,col);
            scanf("%d",&br[row][col]);
        }
    }
    //Addition of Matrix
    menu:
    printf("\n==Select Operation==\n1.Addition\n2.Subtraction\n");
    scanf("%d",&op);
    if(op==1)
        Add(ar,br,res,n);
    else if(op==2)
        Sub(ar,br,res,n);
    else
    {
        printf("Please enter the Correct menu:");
        goto menu;
    }

    return 0;
}
