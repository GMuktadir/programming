#include<stdio.h>
#include<math.h>
//GM 26/06/2020
int main()
{
int bin;
int sum=0,i,j,rem ;
printf("==Binary to decimal ==\n");
printf("Enter Binary Number: ");
scanf("%d",&bin);

i=0;
while(bin!=0){
    rem=bin%10;
    sum+=(rem)*pow(2,i);
    bin/=10;
    i++;
}
printf("%d",sum);

}

