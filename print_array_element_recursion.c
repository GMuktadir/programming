#include<stdio.h>
int print_array(int a[],int start,int last){
if(start>=last)
    return; // termination
    printf("%d, ",a[start]);
    print_array(a,start+1,last);
}
int main()
{
    int a[6]={4,7,84,200,44,2};

    print_array(a,0,5);
    return 0;
}
