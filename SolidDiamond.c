#include<stdio.h>
#define N 5
//GM| 04/04/2020
int main(){
    int row,col,sp=0;
    printf("\n=====Solid Diamond[Full Pyramid + Inverted Fullpyramid (minus one row)] ======\n");
    //Full Pyramid + Inverted Fullpyramid
    for(row=1;row<=N;row++){
        for(col=1;col<=N-row;col++){
                printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
            printf("*");
        printf("\n");
    }

     for(row=N-1;row>=1;row--){
        for(col=1;col<=N-row;col++){
                printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
            printf("*");
        printf("\n");
    }
}
