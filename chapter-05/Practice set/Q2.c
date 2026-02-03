#include<stdio.h>
float change(float a);
int main()
{
    float a;
    printf("Enter the celsius =");
    scanf("%f",&a);
    printf("%f celsius =%f fahrenheit",a,change(a));
    return 0;
}
float change(float a)
{
    return (a*9/5)+32;
}

