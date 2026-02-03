#include<stdio.h>
float force(float a);
int main()
{
    int mass;
    printf("Enter the mass =");
    scanf("%d",&mass);
    printf("%d mass = %.0f force",mass,force(mass));
    return 0;
}
float force(float a)
{
    float g=9.8;
    return a*g;
}
