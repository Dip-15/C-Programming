#include<stdio.h>
int main()
{
    /*float money,tax=0;
    printf("Enter the money:");
    scanf("%f",&money);
    if(money>=250000 && money<500000)
    {
                printf("your tax got pay of money\n");
                tax=tax+(0.05*(money-250000));
                printf("tax=%f",tax);
    }
    else if(money>=500000 && money<1000000)
    {
                printf("your tax got pay of money\n");
                tax=tax+(0.2*(money-500000));
                printf("tax=%f",tax);
    }
    else if(money>=1000000)
    {
                printf("your tax got pay of money\n");
                tax=tax+(0.3*(money-1000000));
                printf("tax=%f",tax);
    }
    else;
    {
        printf("you have no tax to pay");
    }*/
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)|| year%400==0)
        printf("This is leapyear");
    else
        printf("This is not leapyear");
    return 0;
}
