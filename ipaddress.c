//SO(ANE)
//16.3.2021
//Input: 192.211.13.12
//Output: Class C
#include<stdio.h>
int main()
{
 char st[30];
 printf("Input the IP: ");
 gets(st);
 int ar[10], sum;
 sum =0;
     for(int i = 0; i<3; i++)
     {
        ar[i] = st[i] - 48;
        printf("%d",ar[i]);
     }
     for(int j =0; j<3; j++)
     {
        sum = sum*10+ar[j];
     }
 if(sum == 192)
 {
    printf("class C");
 }
 return 0;
}
