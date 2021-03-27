#include<stdio.h>
int num_of_digit(int n){
    static int cnt=0;  //careful here static
 if(n!=0)
 {

     num_of_digit(n/10);
     cnt++;
 }
 return(cnt);

}
int main()
{
    int n=2345,cnt=0;

    printf("Number of Digit: %d",num_of_digit(n));

    return 0;
}
