#include<stdio.h>
int main()
{
    float income;
    float tax=0;
    printf("Enter your amount of money:");
    scanf("%f",&income);
    if(income>=250000 && income<=500000)
    {
        tax=tax+0.05*(income-250000);
    }
    if(income>=500000 && income<=1000000)
    {
        tax=tax+0.2*(income-500000);
    }
    if(income>=1000000)
    {
        tax=tax+0.3*(income-1000000);
    }
    printf("Your net amount of tax pay with in 26 date in this month is:%f",tax);

    return 0;
}
