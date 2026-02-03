#include<stdio.h>
int main()
{
    float prime,rate,years;
    float Simple_interest;
    printf("Enter the prime:");
    scanf("%f",&prime);
    printf("Enter the interest rate:");
    scanf("%f",&rate);
    printf("Enter the year:");
    scanf("%f",&years);
    Simple_interest = (prime*rate*years)/100;
    printf("Simple_interest:%f",Simple_interest);
    return 0;


}
