#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to check wheather the number is greater then 30 or not:");
    scanf("%d",&n);
    (n>30)?printf("%d is greater then 30",n):printf("%d is less then 30",n);
    return 0;
}
