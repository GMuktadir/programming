
#include<stdalign.h>
int PrimeCons(int start,int frequency)
{
    int flag,cnt;
        for(cnt=1;cnt<=frequency;)
        {
             flag=0;
            for(int i=2;i<=start/2;i++)
            {
                if(start%i==0)
                {
                    flag=1;
                    break;
                }
            }

            if(flag==0)
            {
                printf("%d ",start);
                cnt++;
            }

        start++;
        }
}
int main(){
    int start,freq;
    printf("\n=========Prime Number=========\n");
    printf("Where from start prime number ?: ");
    scanf("%d",&start);
    printf("Frequency ? : ");
    scanf("%d",&freq);

    PrimeCons(start,freq);





    return 0;
}
