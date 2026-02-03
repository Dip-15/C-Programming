#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:\n");
    scanf("%d",&marks);
    if(marks<=100&&marks>=90)
    {
        printf("A+");
    }
    else if(marks>=80)
    {
        printf("A");
    }
    else if(marks>=70)
    {
        printf("B+");
    }
    else if(marks>=60)
    {
        printf("B");
    }
    else if(marks>=50)
    {
        printf("C");
    }
    else if(marks>=40)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}
