#include<stdio.h>
int main()
{
    float*ptr;
    ptr=(float*)malloc(5*sizeof(float));
    for(int i=0;i<5;i++)
    {
        printf("Enter the number in ptr[%d]: ",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("The value of ptr[%d] = %.2f\n",i+1,ptr[i]);
    }
    return 0;
}
