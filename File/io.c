#include<stdio.h>
int main()
{
    int i,n;
    FILE *fp,*odd,*even;
    fp=fopen("data.doc","w");
    for(i=0;i<=300;i++)
   {
    //  scanf("%d",&n);
   //    if(n==-1) break;
       putw(i,fp);
   }
   fclose(fp);
   fp=fopen("data.doc","r");
   odd=fopen("odd.txt","w");
   even=fopen("even.txt","w");
   while((i=getw(fp))!=EOF)
   {
   if(i%2==0)
    putw(i,even);
   else
    putw(i,odd);
   }
   fclose(fp);
   fclose(even);
   fclose(odd);
     odd=fopen("odd.txt","r");
   even=fopen("even.txt","r");
   while((i=getw(even))!=EOF)
   {
       printf("%d ",i);
   }
   printf("\n");
   while((i=getw(odd))!=EOF)
   {
       printf("%d ",i);
   }
   fclose(even);
   fclose(odd);
return 0;
}
