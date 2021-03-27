#include<stdio.h>
#define N 5
//GM| 04/04/2020
int main(){
    int row,col,sp=0;
    printf("\n=====Full Pyramid======\n");
    //Full Pyramid
    for(row=1;row<=N;row++){
        for(col=row;col<=N;col++){
                printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
            printf("*");
        printf("\n");
    }
    printf("\n=====Full Pyramid (Same Number)======\n");
    for(row=1;row<=N;row++){
        for(col=1;col<=N-row;col++){
                printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
            printf("%d",row);
        printf("\n");
    }
    printf("\n=====Full Pyramid (Different Number)======\n");
    for(row=1;row<=N;row++){
        for(col=1;col<=N-row;col++){
                printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
            printf("%d",col);
        printf("\n");
    }

    //Inverse Full pyramid
        printf("\n=====Inverse Full pyramid (Different Number)======\n");
    for(row=1;row<=N;row++){
        for(col=1;col<=row;col++){
                printf(" ");
        }
        for(col=1;col<=2*(N-row)-1;col++)
            printf("%d",col);
        printf("\n");
    }
    // end Inverse Full pyramid
     printf("\n=====Full Pyramid (Alphabet Small letter)======\n");
    for(row=1;row<=N;row++){
        for(col=1;col<=N-row;col++){
                printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
            printf("%c",col+96); // col+64 for capital letter
        printf("\n");
    }
     printf("\n=====Full Pyramid (Alphabet Capital letter)======\n");
    for(row=1;row<=N;row++){
        for(col=1;col<=N-row;col++){
                printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
            printf("%c",row+64);
        printf("\n");
    }

    char ch='A';
       printf("\n=====Full Pyramid (Alphabet Capital letter A-Z )======\n");
    for(row=1;row<=N;row++){
        for(col=1;col<=N-row;col++){
                printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
            printf("%c",ch++);
        printf("\n");
    }

    char ch1;
       printf("\n=====Full Pyramid (Alphabet Capital letter -Odd Even logic A/B )======\n");
    for(row=1;row<=N;row++){
            ch1=(row%2==1)?'A':'B';
            for(col=1;col<=N-row;col++){
                    printf(" ");
            }
            for(col=1;col<=row;col++)
            {
                printf("%c%c",ch1,ch1);
                ch1=(ch1=='A')?'B':'A';
            }

            printf("\n");
    }


     int p;
       printf("\n=====Full Pyramid (Alphabet Capital letter -Odd Even logic 0/1 )======\n");
    for(row=1;row<=N;row++){
            p=(row%2==1)?1:0;
            for(col=1;col<=N-row;col++){
                    printf(" ");
            }
            for(col=1;col<=row;col++)
            {
                printf("%d ",p);
                p=(p==0)?1:0;
            }

            printf("\n");
    }

}
