#include<stdio.h>
#define N 5
//GM| 04/04/2020
int main(){
    int i,j;
    //row=i,col=j
    printf("\n=====Half Pyramid======\n");
    //Half Pyramid
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n=====Half Pyramid (Number)======\n");
     for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("%d",i); // test print j
        }
        printf("\n");
    }

    printf("\n=====Inverted Half Pyramid======\n");
   //Inverted Half Pyramid
    for(i=1;i<=N;i++){
        for(j=i;j<=N;j++){
            printf("*");
        }
        printf("\n");
    }
     printf("\n=====Inverted Half Pyramid(Same number)======\n");
   //Inverted Half Pyramid
    for(i=1;i<=N;i++){
        for(j=i;j<=N;j++){
            printf("%d",i);
        }
        printf("\n");
    }

      printf("\n=====Inverted Half Pyramid(number)======\n");
   //Inverted Half Pyramid
    for(i=1;i<=N;i++){
        for(j=i;j<=N;j++){
            printf("%d",j);
        }
        printf("\n");
    }


}


