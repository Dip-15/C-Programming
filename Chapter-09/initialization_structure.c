#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee e1={0};
    printf("code: %d\n",e1.code);
    printf("salary: %.2f\n",e1.salary);
    printf("name: %s\n",e1.name);
    return 0;
}

