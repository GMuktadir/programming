#include<stdio.h>
#define N 5
//GM| 04/04/2020
int main(){
    int row,col;
    printf("\n=====Inverted Full Pyramid======\n");
    //Full Pyramid
    for(row=N;row>=1;row--){
        for(col=1;col<=N-row;col++){
                printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
            printf("*");
        printf("\n");
    }
}
