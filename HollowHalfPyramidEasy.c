#include<stdio.h>
#define N 5
//GM| 04/04/2020
//Hollow  half pyramid
int main(){
int row,col;
printf("====Hollow  half pyramid====\n");
for(row=1;row<=N;row++)
{
    for(col=1;col<=N;col++)
     {
         if(row==N||col==1||row==col)
            printf("*");
         else
            printf(" ");
     }

    printf("\n");
}

printf("====Hollow Inverted  half pyramid====\n");
for(row=1;row<=N;row++)
{
    for(col=1;col<=N;col++)
     {
         if(row==1||col==1||(row==2&&col==4)||(row==4&&col==2)||(row==3&&col==3))
            printf("*");
         else
            printf(" ");
     }

    printf("\n");
}
}
