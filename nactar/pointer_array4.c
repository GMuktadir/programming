//GM | 1-04-2021
//Pointer and function

#include<stdio.h>
void add(int *p)
{
    (*p)++; //(*p)++
}
int main()
{
    int *p,c=22;
    p=&c;
    add(p);
    printf("%d",*p);


    return 0;
}
