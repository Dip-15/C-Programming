#include<stdio.h>
int main()
{
    float Pie=3.14;
    float Redious,Area;
    float Height,Volume;
    printf("Enter the Redious:");
    scanf("%f",&Redious);
    Area=Pie*Redious*Redious;
    printf("Area:%f",Area);
    printf("\nEnter the Height:");
    scanf("%f",&Height);
    Volume=Area*Height;
    printf("Volume= %f",Volume);
    return 0;
}
