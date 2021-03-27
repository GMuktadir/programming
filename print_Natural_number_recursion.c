#include<stdio.h>
int num_print(int n){
    if(n<=50)
        {
           printf("%d, ",n);
           num_print(n+1);
        }
}
int main()
{
    int n=1;
    //scanf("%d",&n);
    num_print(n);
    return 0;
}
