#include<stdio.h>
int main()
{
    int matrix1[10][10],matrix2[10][10],matrix_multi[10][10];
    int m,n,p,q,sum=0;
    printf("Enter the first matrix number of rows and col\n");
    scanf("%d %d",&m,&n);
    printf("Enter the first matrix data\n");
    for(int i=0;i<m;i++)  //rows
    {
        for(int j=0;j<n;j++) // col
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the second matrix number of rows and col\n");
    scanf("%d %d",&p,&q);

    if(n!=p)
    {
        printf("Matrix multiplication not possible\n");
    }
    else
    {
         printf("Enter the second matrix data\n");
         for(int i=0;i<p;i++)  // rows
            {
                for(int j=0;j<q;j++) //cols
                {
                    scanf("%d",&matrix1[i][j]);
                }
            }
            //initialize mat
        for(int i=0;i<m;i++)  // rows
            {
                for(int j=0;j<q;j++) //cols
                {
                        matrix_multi[i][j]=0;
                }
            }
        // multiplication
        for(int i=0;i<m;i++)  // rows
            {
                for(int j=0;j<q;j++) //cols
                {
                    for(int k=0;k<p;k++)
                    {
                        matrix_multi[i][j]+=matrix1[i][k]*matrix2[k][j];
                    }
                }
            }

        printf("Product of matrix\n");
        for(int i=0;i<m;i++)  //rows
        {
            for(int j=0;j<q;j++) // col
            {
                printf("%d\t",matrix_multi[i][j]);

            }
            printf("\n");
        }
    }
    return 0;
}
