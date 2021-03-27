#include<conio.h>
#include<stdio.h>
void main()
{
    static intvar=5;
    printf("%d",intvar--);
    if(intvar)
        main();
}
