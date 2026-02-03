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
   struct  employee e1;
   e1.Code = 100;
   e1.Salary = 35.52;
   strcpy(e1.Name,"Harry");
   printf("%d\n",e1.Code);
   printf("%.3f\n",e1.Salary);
   printf("%s\n",e1.Name);
   return 0;
}

