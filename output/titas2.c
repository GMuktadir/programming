#include<stdio.h>
int main()
{
    int val=1;
    printf("Before do-while loop: val= %d\n",val);
    do {
        val++;
        ++val;
    }
    while(val++>25);
    printf("After do-while loop: val= %d\n",val);
    return 0;
}
