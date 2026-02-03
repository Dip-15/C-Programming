#include<stdio.h>
float average(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("Enter the number a =");
    scanf("%d",&a);
    printf("Enter the number b =");
    scanf("%d",&b);
    printf("Enter the number c =");
    scanf("%d",&c);
    printf("Average of three number =%f",average(a,b,c));
    return 0;
}
float average(int a,int b,int c)
{
    return (float)(a+b+c)/3;
}

