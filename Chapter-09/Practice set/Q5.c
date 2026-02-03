#include<stdio.h>
#include<string.h>
struct complex
{
    float num1;
    float num2;
};
int main()
{
    struct complex z;
    printf("Enter the real number of complex Z:");
    scanf("%f",&z.num1);
    printf("Enter the imaginary number of complex Z:");
    scanf("%f",&z.num2);
    printf("The complex number Z = %.2f + %.2fi",z.num1,z.num2);
    return 0;
}

