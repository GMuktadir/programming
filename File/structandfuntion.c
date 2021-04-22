//Coder ~gm
#include<stdio.h>
void increase(struct product obj1[].price,int size);
struct product
{
    int id;
    char brand[30];
    float price;
    int quantity;
};
int main()
{
    FILE *fp;
    int n,i;
struct product  obj1[30],temp[30];
printf("how many product u enter ?\n=");
scanf("%d",&n);
for(i=0;i<n;i++)
{   //Auto increment product id
    obj1[i].id=i+1;
    scanf("%s %f %d",&obj1[i].brand,&obj1[i].price,&obj1[i].quantity);
//printf("%d %s %.2f %d",obj1[i].id,obj1[i].brand,obj1[i].price,obj1[i].quantity);
}




        //bubble sort

        int stp,comp;
        for(stp=0;stp<n-1;stp++)
        {
            for(comp=0;comp<n-1-stp;comp++)
            {
                  //compare product
                if(obj1[comp].price>obj1[comp+1].price)
             {
                 //ascending
             temp[comp]=obj1[comp];
             obj1[comp]=obj1[comp+1];
            obj1[comp+1]=temp[comp];
             }
            }

      }

//save to file
fp=fopen("productlist.txt","w");
fprintf(fp,"Product list ->Ascending Order by Price \n \n=================================================\n");
printf("Product list ->Ascending Order by Price \n \n=================================================\n");
for(i=0;i<n;i++)
{


    printf("ID: %d Brand: %s Price :%.2f tk  Quantity: %d pcs\n",obj1[i].id,obj1[i].brand,obj1[i].price,obj1[i].quantity);
    fprintf(fp,"ID: %d Brand: %s Price :%.2f tk  Quantity: %d pcs\n",obj1[i].id,obj1[i].brand,obj1[i].price,obj1[i].quantity);
    increase(int obj1[i].price,);
}
for(i=0;i<n;i++)
{
    increase(int obj1[i].price,n);
}
// price after  15% increment

return 0;
}
void increase(struct product obj1[].price,int size)
{
  for(i=0;i<size;i++)
{
    obj1[i].price+=(obj1[i].price*15)/100;

}
}
