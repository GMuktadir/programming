//GM | 16-03-2021
// write a program to show a pattern like below;
#include<stdio.h>
int main()
{
    int row,col,i,j,k=1;
    printf("Enter Number of rows:");
    scanf("%d",&row);
    printf("Enter Number of columns:");
    scanf("%d",&col);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%d\t",k++);
        }
        printf("\n");
    }
    return 0;
}
