#include<stdio.h>
void up(float [],int size);
int main()
{
    int i;
    float a[5]={1,15,20,40,60};
   up(a,5);

    for(i=0;i<5;i++)
    {
        printf("%.2f ",a[i]);
    }


return 0;
}
void up(float b[],int size)  //array passing
{
    int i,sum=0;
    for(i=0;i<size;i++)
  b[i]+=(b[i]*15)/100;

}
