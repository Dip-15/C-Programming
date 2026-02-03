#include<stdio.h>
#include<string.h>
typedef struct complex
{
    float num1;
    float num2;
}com;
void display(com e,int j)
{
    printf("The real number of complex cnum[%d]: %.2f\n",j,e.num1);
    printf("The img number of complex cnum[%d]: %.2f\n",j,e.num2);
}
int main()
{
    com cnum[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter the real number of complex cnum[%d]:",i+1);
        scanf("%f",&cnum[i].num1);
        printf("Enter the imaginary number of cnum[%d]:",i+1);
        scanf("%f",&cnum[i].num2);
    }
    for(int i=0; i<5; i++)
    {
        display(cnum[i],i+1);
    }
    return 0;
}


