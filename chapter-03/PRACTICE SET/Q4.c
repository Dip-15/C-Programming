#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)|| year%400==0)
        printf("This is leapyear");
    else
        printf("This is not leapyear");
    return 0;
}
