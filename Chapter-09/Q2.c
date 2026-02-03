#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee emp)
{
    printf("code: %d\n",emp.code);
    printf("salary: %.3f\n",emp.salary);
    printf("name: %s\n",emp.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    //(*ptr).code=100;
    ptr->code=100;
    ptr->salary=25.36;
    strcpy(ptr->name,"Ram");
    show(e1);
    return 0;
}

