#include<stdio.h>
    struct book_store
    {
        char name[20];
        float price;
        int qn;
    };

int main()
{
    FILE *fp;
    int i,qu,j;
    float price;
    char name;
   struct book_store book1[5],book2;
   fp=fopen("hello.txt","w");
 for(i=0;i<5;i++)
 {
     fscanf(stdin,"%s %f %d",&book1[i].name,&book1[i].price,&book1[i].qn);
     fprintf(fp,"Name:%s \nPrice:%f \n Quantity:%d \n\n",book1[i].name,book1[i].price,book1[i].qn);

 }
 fclose(fp);
  fp=fopen("hello.txt","r");
 for(j=0;j<5;j++)
 {
     fscanf(fp,"%s %f %d",&name,&price,&qu);
     printf("Name:%s \nPrice:%f \n Quantity:%d \n\n",name,price,qu);
 }

    return 0;
}
