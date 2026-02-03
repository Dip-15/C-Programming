#include<stdio.h>
#include<string.h>
struct  employee
{
    int Code;
    float Salary;
    char Name[10];
};
int main()
{
   struct  employee e1,e2,e3;
   printf("Enter the value for code of e1: ");
   scanf("%d",&e1.Code);
   printf("Enter the value for salary of e1: ");
   scanf("%f",&e1.Salary);
   printf("Enter the Name for code of e1: ");
   scanf("%s",e1.Name);
   printf("Enter the value for code of e2: ");
   scanf("%d",&e2.Code);
   printf("Enter the value for salary of e2: ");
   scanf("%f",&e2.Salary);
   printf("Enter the Name for code of e2: ");
   scanf("%s",e2.Name);
   printf("Enter the value for code of e3: ");
   scanf("%d",&e3.Code);
   printf("Enter the value for salary of e3: ");
   scanf("%f",&e3.Salary);
   printf("Enter the Name for code of e3: ");
   scanf("%s",e3.Name);

   printf("%d\n",e1.Code);
   printf("%.3f\n",e1.Salary);
   printf("%s\n",e1.Name);
   printf("%d\n",e2.Code);
   printf("%.3f\n",e2.Salary);
   printf("%s\n",e2.Name);
   printf("%d\n",e3.Code);
   printf("%.3f\n",e3.Salary);
   printf("%s\n",e3.Name);
   return 0;
}


