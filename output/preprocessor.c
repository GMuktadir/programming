#include<stdio.h>
int main()
{
    printf("Date: %s\n",__DATE__);
    printf("File location: %s \n",__FILE__);
    printf("TIME : %s\n",__TIME__);



    printf("LINE: %d\n",__LINE__);
    printf("STDC: %d\n",__STDC__);
    return 0;
}
