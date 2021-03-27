#include<stdio.h>
int function(int x[],int i){
int s=x[i];
if(i>0){
s+=function(x,i-1);
}
printf("%d",s);
return s;
}
int main(){
int y[]={1,3,2,8};
function(y,2);
return 0;
}
