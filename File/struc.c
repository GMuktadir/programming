#include<stdio.h>

struct emp_info
{
char emp_name[23];
int emp_id;
int dep_id;
float salary;
};
int main()
{
int j,i,number,n;

struct emp_info obj[50],temp;
FILE *fp;
fp = fopen("input.txt","w");
printf("Enter employee number and top salary holder number : \n");
scanf("%d%d",&number,&n);

fprintf(fp," Name ID DEPT_ID SALARY \n\n");
printf("Enter %d employee information blow : \n",number);
printf("\nName \tRoll \tDept_ID \tsalary \n");
for(i = 0; i<number; i++)
{
scanf("%s%d%d%f",obj[i].emp_name,&obj[i].emp_id,&obj[i].dep_id,&obj[i].salary);
fprintf(fp,"%20s %8d %8d %12.3f\n",obj[i].emp_name,obj[i].emp_id,obj[i].dep_id,obj[i].salary);

}

    for(i=0;i<number-1;i++)
    {
        for(j=0;j<number-i-1;j++)
        {
            if(obj[j].salary<obj[j+1].salary)
                {
                temp = obj[j];
                obj[j]= obj[j+1];
                obj[j+1]= temp;

                }
        }
    }

fprintf(stdout," Name ID DEPT_ID SALARY ");
for(i = 0; i<n; i++)
{

fprintf(stdout,"\n%20s %8d %8d %10.3f\n",obj[i].emp_name,obj[i].emp_id,obj[i].dep_id,obj[i].salary);

}
fprintf(stdout,"\n\t**Look Your directory where you have save this source file and open input.txt file with Notepad for see information details.");

return 0;
}
