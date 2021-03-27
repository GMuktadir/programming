#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Hello\0, World";
    int a=strlen(str);
    printf("Length: %d",a);

    return 0;
}
